#ifndef CHILD_H
#define CHILD_H

#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Child : public Person
{
private:
    string FavouriteToy;

public:
    Child(string name = "Default name", string ssnum = "Default ssnum",int age = 0,string toy = "default toy"):Person(name,ssnum,age)
    {
        this->FavouriteToy = toy;
    }
    string getFavouriteToy()
    {
        return this->FavouriteToy;
    }
    void setFavouriteToy(string toy)
    {
        this->FavouriteToy = toy;
    }
    void print(){
        Person::print();
        cout<<"Favourite toy: "<<this->FavouriteToy<<endl;
    }
};

#endif