#include <Employee.h>

using namespace std;
int main()
{
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