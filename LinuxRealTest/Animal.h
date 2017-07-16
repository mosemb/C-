//
// Created by root on 2017/07/15.
//
#include <string>
using namespace std;

#ifndef LINUXREALTEST_ANIMAL_H
#define LINUXREALTEST_ANIMAL_H

const string unk = "unknown";
const string clp = "cloneprefix";

class Animal {
private:
    string _name;
    string _type;
    string _sound;

public:
    Animal();
    Animal(string name , string type , string sound);
    ~Animal();


    void setname(string name_);
    string getname();

    void settype(string type_);
    string gettype();

    void setsound(string sound_);
    string getsound();




};


#endif //LINUXREALTEST_ANIMAL_H
