#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <vector>
#include <string>
#include "Child.h"
#include "Division.h"
#include "JobDescription.h"
#include "Spouse.h"

class Employee : public Person
{
private:
    string CompanyID;
    string Title;
    Date StartDate;

    Division division;                     // 1
    vector<JobDescription> jobDescription; // 1..n
    Spouse *spouse = nullptr;              // 0..1
    vector<Child> children;                // dynamic ugugliin butets ashiglaj baina. 0..n

public:
    Employee(string name = "Default name", string ssnum = "Default ssnum", int age = 0, string companyid = "default company", string title = "default tiitle", int year=2000, int month=1, int day=1):Person(name,ssnum, age)
    {
        this->CompanyID = companyid;
        this->Title = title;

        this->StartDate.setYear(year);
        this->StartDate.setMonth(month);
        this->StartDate.setDay(day);
    }

    string getCompanyID()
    {
        return this->CompanyID;
    }
    string getTitle()
    {
        return this->Title;
    }
    Date getStartDate()
    {
        return this->StartDate;
    }

    void setCompanyID(string id)
    {
        this->CompanyID = id;
    }
    void setTitle(string title)
    {
        this->Title = title;
    }
    void setStartDate(Date date)
    {
        this->StartDate = date;
    }
    
    
    void setDivision(Division div)
    {
        this->division = div;
    }
    Division getDivision(){
        return this->division;
    }
    void setSpouse(Spouse* sp)
    {
        spouse = sp;
    }
    Spouse* getSpouse(){
        return this->spouse;
    }
    void addJobDescription(JobDescription desc)
    {
        this->jobDescription.push_back(desc);
    }
    void removeJobDescription()
    {
        this->jobDescription.pop_back();
    }
    vector<JobDescription> getJobDescription(){
        return this->jobDescription;
    }
    void addChild(Child child)
    {
        this->children.push_back(child);
    }
    void removeChild()
    {
        this->children.pop_back();
    }
    vector<Child> getChildren(){
        return this->children;
    }

    void print(){
        Person::print();
        cout<<"Company id : "<<this->CompanyID<<endl;
        cout<<"Title : "<<this->Title<<endl;
        cout<<"Start Date : "<<endl;
        this->StartDate.print();
    }
};

#endif