#include "Teacher.h"
#include <iostream>


Teacher::Teacher()
{
	fname = "";
	lname = "";
	city = "";
	sex = "";
	age = 0;
	phone = 0;
}

Teacher::Teacher(string firstname, string lastname, string city1, string sex1, double ag_e, double phone_number)
{
	fname = firstname;
	lname = lastname;
	city = city1;
	sex = sex1;
	age = ag_e;
	phone = phone_number;
}

Teacher::~Teacher()
{
}

void Teacher::SetFirstName(string firstn)
{
	fname = firstn;
}

string Teacher::GetFirstName() {
	return fname;
}

void Teacher::SetLastName(string lastn) {
	lname = lastn;
}

string Teacher::GetLastName() {
	return lname;
}

void Teacher::SetCity(string cityn) {
	city = cityn;
}

string Teacher::GetCity() {
	return city;

}

void Teacher::SetSex(string sexn)
{
	sex = sexn;
}

string Teacher::GetSex()
{
	return sex;
}

void Teacher::SetAge(double agen)
{
	age = agen;
}

double Teacher::GetAge()
{
	return age;
}

void Teacher::SetPhone(double phonen) {
	phone = phonen;
}

double Teacher::GetPhone() {
	return phone;
}

void Teacher::SitInClass(){
	cout <<"Student Graded" << endl;

}

