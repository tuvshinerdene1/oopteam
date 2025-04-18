#include <iostream>

class Avatar {
public:
    void display() const { std::cout << "Avatar loaded\n"; }
};

class UserProfile {
private:
    const Avatar avatar; // uusgesnees hoish utgiig ni uurcilj bolohgui (immutable)

public:
    UserProfile(const Avatar& a) : avatar(a) {}

    void showAvatar() const {
        avatar.display();
    }
};

int main() {
    Avatar avatar;
    UserProfile user(avatar);
    user.showAvatar();
}
