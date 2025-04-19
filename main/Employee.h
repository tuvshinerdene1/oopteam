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
    Employee(string companyid = "default company", string title = "default tiitle", Date StartDate)
    {
        this->CompanyID = companyid;
        this->Title = title;
        this->StartDate = StartDate;
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
    void setSpouse(Spouse sp)
    {
        if (spouse != nullptr)
        {
            delete spouse;
        }
        spouse = new Spouse(sp);
    }
    void addJobDescription(JobDescription desc)
    {
        this->jobDescription.push_back(desc);
    }
    void removeJobDescription()
    {
        this->jobDescription.pop_back();
    }
    void addChild(Child child)
    {
        this->children.push_back(child);
    }
    void removeChild()
    {
        this->children.pop_back();
    }
};