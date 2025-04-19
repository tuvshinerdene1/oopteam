#include <iostream>
#include <string>

using namespace std;

class Division
{
private:
    string DivisionName;

public:
    Division(string name = "default division")
    {
        this->DivisionName = name;
    }
    string getDivisionName()
    {
        return this->DivisionName;
    }
    void setDivisionName(string name)
    {
        this->DivisionName = name;
    }
};
