#include <iostream>
#include <vector>
#include <stdexcept>

class File {};

class Folder {
private:
    std::vector<File> files;

public:
    void addFile(const File& file) {
        if (files.size() >= 5) {
            throw std::runtime_error("Folder can't hold more than 5 files");
        }
        files.push_back(file);
    }
};

int main() {
    Folder folder;
    for (int i = 0; i < 5; ++i) {
        folder.addFile(File());
    }

    // folder.addFile(File()); // uncommenting this will throw
}
