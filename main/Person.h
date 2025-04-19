#include<iostream>
#include<string>
using namespace std;

class Person{
    private:
        string Name;
        string SSNum;
        int Age;
    public:
        string getName(){
            return this->Name;
        }
        string getSSNum(){
            return this->SSNum;
        }
        int getAge(){
            return this->Age;
        }
        void setName(string name = "Default name"){
            this->Name = name;
        }
        void setSSNum(string ssnum = "Default ssnum"){
            this->SSNum = ssnum;
        }
        void setAge(int age = 0){
            this->Age = age;
        }

};