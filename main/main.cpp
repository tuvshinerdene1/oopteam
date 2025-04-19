#include "Employee.h"

using namespace std;
int main()
{
    Division div1("Management"), div2("Development"), div3("Communication");
    JobDescription job1("manager"), job2("developer"), job3("customer support");

    Date d1(1999, 12, 1);
    Date d2(1997, 2, 3);
    Date d3(1996, 3, 2);

    vector<Employee> employees;

    Employee e1("num", "chief", d1);
    e1.setName("Bat");
    e1.setAge(20);
    e1.setSSNum("MN101");
    Employee e2("shutis", "slave", d2);
    e2.setName("Dorj");
    e2.setAge(24);
    e2.setSSNum("MN102");
    Employee e3("num", "war machine", d3);
    e3.setName("Munkhuu");
    e3.setAge(20);
    e3.setSSNum("MN103");

    employees.push_back(e1);
    employees.push_back(e2);
    employees.push_back(e3);

    e1.setDivision(div1);
    e2.setDivision(div2);
    e3.setDivision(div3);

    e1.addJobDescription(job1);
    e2.addJobDescription(job2);
    e3.addJobDescription(job3);

    Spouse sp1(2005,1,5);
    sp1.setName("Tsetseg");
    sp1.setAge(22);
    sp1.setSSNum("MN104");

    Spouse sp2(2004,3,19);
    sp2.setName("Tuya");
    sp2.setAge(23);
    sp2.setSSNum("MN105");

    Spouse sp3(2001,4,21);
    sp3.setName("Tuvshin");
    sp3.setAge(20);
    sp3.setSSNum("MN106");

    Child ch1("nintendo switch");
    ch1.setName("Bat junior");
    ch1.setAge(10);
    ch1.setSSNum("MN107");

    Child ch2("playstatoin");
    ch2.setName("Boldoo");
    ch2.setAge(4);
    ch2.setSSNum("MN108");

    Child ch2("playstatoin");
    ch2.setName("Boldoo");
    ch2.setAge(4);
    ch2.setSSNum("MN108");

    Child ch2("playstatoin");
    ch2.setName("Boldoo");
    ch2.setAge(4);
    ch2.setSSNum("MN108");

    return 0;
}
