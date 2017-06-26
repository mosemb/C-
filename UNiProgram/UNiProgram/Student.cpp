#include "Student.h"
#include <iostream>
using namespace std;

Student::Student()
{
	fname = "";
	lname = "";
	sex = "";
	city = "";
	age = 0;
	phone = 0;
}

Student::Student(string first_name, string last_name, string sex_1, string city_1, double age_1, double phon_e)
{
	fname = first_name;
	lname = last_name;
	sex = sex_1;
	city = city_1;
	age = age_1;
	phone = phon_e;

}

Student::~Student()
{
}

void Student::SetFirstName(string f_name)
{
	fname = f_name;

}

string Student::GetFirstName()
{
	return fname; 
}

void Student::SetLastName(string l_name)
{
	lname = l_name;
}

string Student::GetLastName()
{
	return string();
}

void Student::SetSex(string se_x)
{
	sex = se_x;
}

string Student::GetSex()
{
	return string();
}

void Student::SetCity(string city2)
{
	city = city2;
}

string Student::GetCity()
{
	return city;
}

void Student::SetPhone(double phone_no)
{
	phone = phone_no;
}

double Student::GetPhone()
{
	return phone;
}


void Student::SetAge(double ag_e) {
	age = ag_e;
}
double Student::GetAge() {
	return age;
}

void Student::SitInClass()
{
	cout<< "Studen Graded" << endl;
}

