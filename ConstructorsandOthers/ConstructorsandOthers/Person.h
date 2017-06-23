#pragma once
#include <string>

using namespace std;

class Person {
private:
	string first_name;
	string last_name;
	int age;


public:
	Person();
	Person( string fname, string lname);
	Person(string fname1 , string lname1 , int age1);
	~Person();

	void SayHello();

};