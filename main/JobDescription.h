#ifndef JOBDESCRIPTION_H
#define JOBDESCRIPTION_H

#include <iostream>
#include <string>
using namespace std;
class JobDescription
{
private:
    string Description;

public:
    JobDescription(string desc = "default description")
    {
        this->Description = desc;
    }
    string getDescription()
    {
        return this->Description;
    }
    void setDescription(string desc)
    {
        this->Description = desc;
    }
};

#endif