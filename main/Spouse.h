#include<iostream>
#include<string>
#include "Person.h"
#include "Date.h"
using namespace std;
class Spouse : public Person {
    private:
        Date AnniversaryDate;
    public:
        string name;
     
        Spouse(string name) : name(name) {}
    };
     