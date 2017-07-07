#pragma once
#include <string>
using namespace std;

class Person {
private:
	string first_name;
	string last_name;
	string race;
	//int age;
protected:
	int phone;
	int age;

public:
	Person();
	Person(string firstname, string lastname, string race1, int age1, int phone1);

	void setAge(int age2);

	virtual void OutputIdentity() = 0;
	virtual string OutputAge();


};
