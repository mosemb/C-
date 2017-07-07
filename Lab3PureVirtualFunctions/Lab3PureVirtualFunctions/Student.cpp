#include "Student.h"
#include <string>
#include <iostream>


Student::Student()
{
}

Student::Student(int yearofstudy1, string course)
{
}

void Student::OutputIdentity()
{
	cout << "I am a student"<< endl;
}

string  Student::OutputAge()
{
	return string();

}

void Student::setYearofStudy(int y)
{
	yearofstudy = y;
}

int Student::getYearofStudy()
{
	return yearofstudy;
}
