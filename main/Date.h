#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;
class Date
{
private:
    int year;
    int month;
    int day;

public:
    Date(int year = 2000, int month = 1, int day = 1)
    {
        this->year = year;
        this->month = month;
        this->day = day;
    }
    int getYear()
    {
        return this->year;
    }
    int getMonth()
    {
        return this->month;
    }
    int getDay()
    {
        return this->day;
    }
    void setYear(int year)
    {
        this->year = year;
    }
    void setMonth(int month)
    {
        this->month = month;
    }
    void setDay(int day)
    {
        this->day = day;
    }
    void print()
    {
        cout << this->year << "-" << this->month << "-" << this->day << endl;
    }
};

#endif