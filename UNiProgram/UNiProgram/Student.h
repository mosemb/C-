#pragma once
#include <vector>
#include <string>
using namespace std;

class Student {
private:
	string fname;
	string lname;
	string sex;
	string city;
	double phone;
	double age;

public:
	Student();
	Student(string first_name, string last_name, string sex, string city , double age , double phone );
	~Student();

	void SetFirstName(string f_name);
	string GetFirstName();

	void SetLastName(string l_name);
	string GetLastName();

	void SetSex(string se_x);
	string GetSex();

	void SetCity(string city);
	string GetCity();

	void SetPhone(double phone_no);
	double GetPhone();

	void SetAge(double ag_e);
	double GetAge();

	void SitInClass();




};
