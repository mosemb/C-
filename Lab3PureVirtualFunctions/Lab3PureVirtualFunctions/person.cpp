#include "person.h"
#include <iostream>

Person::Person()
{
}

Person::Person(string firstname, string lastname, string race1, int age1, int phone1)
{
	first_name = firstname;
	last_name = lastname;
	race = race1;
	age = age1;
	phone = phone1;
}

void Person::setAge(int age2)
{
	age = age2;

}

string Person::OutputAge()
{
	cout << "I am a" << endl;
	return string();
}

/*
string Person::OutputAge()
{
cout << "i am a teacher" << endl;
return string;
}

*/


