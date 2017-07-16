//
// Created by root on 2017/07/15.
//

#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

Animal::Animal(){
    _name = "";
    _type = "";
    _sound = "";
}

Animal::Animal(string name, string type, string sound) {
   // setname(name);
   // settype(type);
  //  setsound(sound);

    _name = name;
    _type = type;
    _sound = sound;
}

Animal::~Animal(){
    cout<< "And the destructor is called" << endl;

}


 void Animal::setsound(string so) {
    _sound = so;
}

string Animal::getsound() {
    return _sound;
}

void Animal::settype(string type_) {
    _type = type_;
}

string Animal::gettype() {
    return _type;
}

void Animal::setname(string name_) {
    _name = name_;
}

string Animal::getname() {
    return _name;
}








