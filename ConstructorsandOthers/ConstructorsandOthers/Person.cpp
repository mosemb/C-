#include "Person.h"
#include <iostream>
using namespace std;



Person::Person()
{
	first_name = "";
	last_name = "";
	age = 0;
}

Person::Person(string fname, string lname)
{
	first_name = fname;
	last_name = lname;
	this->age = 0;

}

Person::Person(string fname1, string lname1, int age1)
{
	first_name = fname1;
	last_name = lname1;
	age = age1;

}

Person::~Person()
{
}

void Person::SayHello()
{
	cout << "Say Hello" << endl;

}
