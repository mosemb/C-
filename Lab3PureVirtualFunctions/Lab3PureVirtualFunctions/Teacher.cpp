#include "Teacher.h"
#include <iostream>

Teacher::Teacher()
{
}

Teacher::Teacher(string course){

}

void Teacher::OutputIdentity()
{
	cout << "I am a teacher " << endl; 
}

string Teacher::OutputAge()
{
	cout << "I am a teacher and "<< endl;
	Person::OutputAge(); 
	return 0;
}
