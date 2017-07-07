#pragma once
#include "person.h"
#include <string>


class Teacher : public Person {

private:
	string course;
public:
	Teacher();
	Teacher(string course );
	virtual void OutputIdentity();
	virtual string OutputAge();




};
