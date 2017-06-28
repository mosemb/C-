#include "Student.h"
#include <string>
#include <iostream>

using namespace std;


Student::Student()
	:course("unassigned course") // Shortcut for assigning values in constructor :course("u") == course = "u";
{
	
}

Student::Student(string & name, int age, string & course)
	:Person(name , age) , course(course)
{


}

void Student::display() const
{
	Person::display(); // Calling the display function of the Person class. ( Base class)  

	cout << course << endl;  // Printing the course from the derived class 
}

Student::~Student()
{
	cout << "Good bye from the student destructor" << endl; 
}
