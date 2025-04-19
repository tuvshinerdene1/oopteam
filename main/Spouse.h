#include<iostream>
#include<string>
#include "Person.h"
#include "Date.h"
using namespace std;
class Spouse : public Person {
    private:
        Date AnniversaryDate;
    public:
        Spouse(int year, int month, int day){
            this->AnniversaryDate.setYear(year);
            this->AnniversaryDate.setMonth(month);
            this->AnniversaryDate.setDay(day);
        }
        Date getAnniversaryDate(){
            return this->AnniversaryDate;
        }
        void setAnniversaryDate(Date date){
            this->AnniversaryDate = date;
        }
    };
     