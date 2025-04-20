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

    Child ch2("playstation");
    ch2.setName("Boldoo");
    ch2.setAge(3);
    ch2.setSSNum("MN109");

    Child ch3("xbox");
    ch3.setName("Temujin");
    ch3.setAge(6);
    ch3.setSSNum("MN110");

    Child ch4("pc");
    ch4.setName("Bayraa");
    ch4.setAge(8);
    ch4.setSSNum("MN111");

    Child ch5("ankle bones");
    ch5.setName("Dondog");
    ch5.setAge(17);
    ch5.setSSNum("MN112");

    Child ch6("Dota");
    ch6.setName("Tuvshintsetseg");
    ch6.setAge(2);
    ch6.setSSNum("MN113");

    e1.setSpouse(sp1);
    e2.setSpouse(sp2);
    e3.setSpouse(sp3);

    e1.addChild(ch1);e1.addChild(ch2);e1.addChild(ch3);
    e2.addChild(ch4);
    e3.addChild(ch5);e3.addChild(ch6);


    return 0;
}
