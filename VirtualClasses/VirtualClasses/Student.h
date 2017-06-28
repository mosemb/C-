#pragma once
#include <string>
#include "Person.h"
using namespace std;

class Student : public Person {

private:
	string course;

public:
	Student();
	Student(string &name, int age, string &course1);
	virtual void display() const;
	virtual ~Student();


};
