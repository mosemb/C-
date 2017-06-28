#include "Person.h"
#include <iostream>


Person::Person()
{
}

Person::Person(string name1, int age2)
{
	name = name1;
	age = age2;
}

void Person::display() const
{
	cout << name << " , " << age << endl; 

}

Person::~Person()
{
	cout << "Good bye from the person destructor" << endl; 
}
