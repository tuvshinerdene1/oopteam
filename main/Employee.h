#include<Child.h>
#include<Division.h>
#include<JobDescription.h>
#include<Spouse.h>
#include<vector>

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