#pragma once
#include <string>
#include "person.h"

class Student :public Person {
private:
	int yearofstudy;
	string course;


public:
	Student();
	Student(int yearofstudy1, string course);
	virtual void OutputIdentity();
	virtual string OutputAge(); 

	void setYearofStudy(int y);
	int getYearofStudy();
};
