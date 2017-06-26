#include <string>
using namespace std;

#pragma once

class Teacher {

private:
	string fname;
	string lname;
	string city;
	string sex;
	double age;
	double phone;

public:
	Teacher();
	Teacher(string firstname, string lastname, string city, string sex, double ag_e, double phone_number);
	~Teacher();

	void SetFirstName(string firstn);
	string GetFirstName();

	void SetLastName(string lastn);
	string GetLastName();

	void SetCity(string cityn);
	string GetCity();

	void SetSex(string sexn);
	string GetSex();

	void SetAge(double agen);
	double GetAge();

	void SetPhone(double phonen);
	double GetPhone();

	void SitInClass();


};
