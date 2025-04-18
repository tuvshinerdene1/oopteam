#include <iostream>
#include <string>

class Department
{
public:
    std::string name;

    Department(const std::string &deptName) : name(deptName) {}
    void display() const
    {
        std::cout << "Department: " << name << std::endl;
    }
};

class Teacher
{
private:
    std::string TeacherName;
    Department *dept; // sul holboo

public:
    Teacher(const std::string &name, Department *d) : TeacherName(name), dept(d) {}

    void display() const
    {
        std::cout << "Teacher: " << TeacherName << std::endl;
        if (dept) // dept buyu department null esehiig shalgaj baina
            dept->display();
    }
};

int main()
{
    Department csDept("Computer Science");

    Teacher s1("Alice", &csDept);
    Teacher s2("Bob", &csDept);

    s1.display();
    s2.display();

    return 0;
}
