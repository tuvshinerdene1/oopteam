#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
class Division {
public:
    string name;
 
    Division(string name) : name(name) {}
};
 
class JobDescription {
public:
    string title;
 
    JobDescription(string title) : title(title) {}
};
 
class Spouse {
public:
    string name;
 
    Spouse(string name) : name(name) {}
};
 
class Child {
public:
    string name;
    int age;
 
    Child(string name, int age) : name(name), age(age) {}
};
 
class Employee {
public:
    string name;
    Division* division;               // 1
    JobDescription* jobDescription;   // 1
    Spouse* spouse = nullptr;         // 0..1
    vector<Child> children;           // 0..n
 
    Employee(string name, Division* division, JobDescription* jobDescription)
        : name(name), division(division), jobDescription(jobDescription) {}
 
    void setSpouse(Spouse* s) {
        spouse = s;
    }
 
    void addChild(Child c) {
        children.push_back(c);
    }
 
    void print() {
        cout << "Employee Name: " << name << endl;
        cout << "Division: " << division->name << endl;
        cout << "Job Title: " << jobDescription->title << endl;
        if (spouse != nullptr) {
            cout << "Spouse: " << spouse->name << endl;
        } else {
            cout << "Spouse: None" << endl;
        }
        cout << "Children: " << endl;
        if (children.empty()) {
            cout << "  None" << endl;
        } else {
            for (auto& child : children) {
                cout << "  " << child.name << ", age " << child.age << endl;
            }
        }
        cout << "------------------------" << endl;
    }
};
 
int main() {
    // Divisions
    Division d1("HR");
    Division d2("IT");
 
    // Job Descriptions
    JobDescription j1("Manager");
    JobDescription j2("Developer");
 
    // Employees
    Employee e1("Alice", &d1, &j1);
    Employee e2("Bob", &d2, &j2);
 
    // Spouses
    Spouse s1("Charlie");
    e1.setSpouse(&s1); // e1 has a spouse
 
    // Children
    e1.addChild(Child("Daisy", 5));
    e1.addChild(Child("Ethan", 3));
 
    e2.addChild(Child("Fiona", 2));
 
    // Print all employee info
    e1.print();
    e2.print();
 
    return 0;
}