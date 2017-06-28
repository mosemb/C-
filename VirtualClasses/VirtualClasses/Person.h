#pragma once

#include <string>
#include <iostream>
using namespace std;

class Person {

private:
	string name; 

protected:
	int age;

public:
	Person();
	Person(string name1, int age2);

	virtual void display()const;
	virtual ~Person();

};