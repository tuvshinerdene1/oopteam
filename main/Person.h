#include<iostream>
#include<string>
using namespace std;

class Person{
    private:
        string Name;
        string SSNum;
        int Age;
    public:
        Person(string Name = "Default name", string SSNUM = "Default ssnum", int age = 0){
            this->Name = Name;
            this->SSNum = SSNUM;
            this->Age = age;
        }
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