#include <vector>
#include "Child.h"
#include "Division.h"
#include "JobDescription.h"
#include "Spouse.h"

class Employee
{
private:
    string CompanyID;
    string Title;
    Date StartDate;

public:
    Division *division;
    JobDescription *jobDescription;
    Spouse *spouse = nullptr; // 0..1
    vector<Child> children;   // dynamic ugugliin butets ashiglaj baina. 0..n

    Employee(string companyid = "default company" , string title = "default tiitle", Date StartDate){
        this->CompanyID = companyid;
        this->Title = title;
        this->StartDate = StartDate;
    }

    string getCompanyID(){
        return this->CompanyID;
    }
    string getTitle(){
        return this->Title;
    }
    Date getStartDate(){
        return this->StartDate;
    }
    
    void setCompanyID(string id){
        this->CompanyID = id;
    }
    void setTitle(string title){
        this->Title = title;
    }
    void setStartDate(Date date){
        this->StartDate = date;
    }
};