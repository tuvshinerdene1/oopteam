#include "Employee.h"

using namespace std;
int main()
{
    Division div1("Management"), div2("Development"), div3("Communication");
    JobDescription job1("manager"), job2("developer"), job3("customer support");

    vector<Employee *> employees;

    Employee e1("Bat", "MN101", 20, "num", "chief", 1999, 12, 1);
    Employee e2("Dorj", "MN102", 24, "shutis", "slave", 1997, 2, 3);
    Employee e3("Munkhuu", "MN103", 20, "num", "war machine", 1996, 3, 2);

    employees.push_back(&e1);
    employees.push_back(&e2);
    employees.push_back(&e3);

    e1.setDivision(div1);
    e2.setDivision(div2);
    e3.setDivision(div3);

    e1.addJobDescription(job1);
    e2.addJobDescription(job2);
    e3.addJobDescription(job3);

    Spouse sp1("Tsetseg", "MN104", 22, 2005, 1, 5);
    Spouse sp2("Tuya", "MN105", 23, 2004, 3, 19);
    Spouse sp3("Tuvshin", "MN106", 20, 2001, 4, 21);

    Child ch1("Bat junior", "MN107", 10, "nintendo switch");
    Child ch2("Boldoo", "MN109", 3, "playstation");
    Child ch3("Temujin", "MN110", 6, "xbox");
    Child ch4("Bayraa", "MN111", 8, "pc");
    Child ch5("Dondog", "MN112", 17, "ankle bones");
    Child ch6("Tuvshintsetseg", "MN113", 2, "Dota");

    e1.setSpouse(&sp1);
    e2.setSpouse(&sp2);
    e3.setSpouse(&sp3);

    e1.addChild(ch1);
    e1.addChild(ch2);
    e1.addChild(ch3);
    e2.addChild(ch4);
    e3.addChild(ch5);
    e3.addChild(ch6);

    for (int i = 0; i < employees.size(); i++)
    {
        cout << "++++++++++++++++++++++++++++++++++++++" << endl;
        employees[i]->print();
        cout << "----------------------------" << endl;
        cout << "spouse: " << endl;
        employees[i]->getSpouse()->print();
        cout << "----------------------------" << endl;
        cout << "Children: " << endl;
        for (int k = 0; k < employees[i]->getChildren().size(); k++)
        {
            employees[i]->getChildren()[k].print();
            cout << "-------" << endl;
        }
    }

    return 0;
}