#include<iostream>
#include<string>
#include "Person.h"
using namespace std;

class Child {
    private:
        string FavouriteToy;
    public:
        Child(string toy = "default toy"){
            this->FavouriteToy = toy;
        }
        string getFavouriteToy(){
            return this->FavouriteToy;
        }
        void setFavouriteToy(string toy){
            this->FavouriteToy = toy;
        }
    };
     