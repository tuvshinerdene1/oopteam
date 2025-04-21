#ifndef SPOUSE_H
#define SPOUSE_H

#include <iostream>
#include <string>
#include "Person.h"
#include "Date.h"
using namespace std;
class Spouse : public Person
{
private:
    Date AnniversaryDate;

public:
    Spouse(string name = "Default name", string ssnum = "Default ssnum", int age = 0,int year = 2000, int month = 1, int day = 1):Person(name,ssnum,age)
    {
        this->AnniversaryDate.setYear(year);
        this->AnniversaryDate.setMonth(month);
        this->AnniversaryDate.setDay(day);
    }
    Date getAnniversaryDate()
    {
        return this->AnniversaryDate;
    }
    void setAnniversaryDate(Date date)
    {
        this->AnniversaryDate = date;
    }
    void print(){
        Person::print();
        cout<<"Anniversary date : "<<AnniversaryDate.getYear()<<"-"<<AnniversaryDate.getMonth()<<"-"
        <<AnniversaryDate.getDay()<<endl;
    }
};

#endif
