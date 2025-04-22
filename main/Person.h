#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person
{
private:
    string Name;
    string SSNum;
    int Age;

public:
    Person(string Name = "Default name", string SSNUM = "Default ssnum", int age = 0)
    {
        this->Name = Name;
        this->SSNum = SSNUM;
        this->Age = age;
    }
    string getName()
    {
        return this->Name;
    }
    string getSSNum()
    {
        return this->SSNum;
    }
    int getAge()
    {
        return this->Age;
    }
    void setName(string name)
    {
        this->Name = name;
    }
    void setSSNum(string ssnum)
    {
        this->SSNum = ssnum;
    }
    void setAge(int age)
    {
        this->Age = age;
    }
    void print()
    {
        cout << "Name: " << this->Name << endl;
        cout << "SSNum: " << this->SSNum << endl;
        cout << "Age: " << this->Age << endl;
    }
};

#endif