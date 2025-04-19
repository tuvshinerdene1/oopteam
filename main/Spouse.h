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
    Spouse(int year = 2000, int month = 1, int day = 1)
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
};
