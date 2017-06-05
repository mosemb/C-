
#include <cstdio>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main(int argc , char ** arg) {


	enum Months { January = 1, Febuary, March, April, May, June, July, August, September, October, November, December };

	


    struct Birth_infor{   // union can as well work here
		int Year;
		Months month;
		int Date;

	};

	struct customer_infor {

		string First_Name;
		string Street_Adress;
		Birth_infor birth;
		double Account_Balance;
		Months Months_of_the_year;
};

	customer_infor uganda;
	uganda.First_Name = "James";
	uganda.Street_Adress = "53 KG 7 ";
	uganda.birth.Year = 1980;
	uganda.birth.Date = 2;
	uganda.birth.month = January;
	uganda.Account_Balance = 240.8;
	uganda.Months_of_the_year = July;

	

	
	stringstream ss;
	ss << uganda.birth.Year;
	string str = ss.str(); 
	//char str = static_cast<char>(uganda.birth.Year);   // int to char


	stringstream dd;
	dd << uganda.birth.Date;
	string str2 = dd.str();


	stringstream ff;
	ff << uganda.birth.month;
	string str3 = ff.str();

	stringstream hh;
	hh << uganda.Account_Balance;
	string str4 = hh.str();

	stringstream gg;
	gg << uganda.Months_of_the_year;
	string str5 = gg.str();


	{  



		cout << "First Name -" + uganda.First_Name << endl; 
		cout << "Street Address - " + uganda.Street_Adress << endl;
		cout <<"Year of birth " + str  << endl ; 
		cout << "Date of birth " + str2 << endl;
		cout << "Month of birth " + str3 << endl; 
		cout << "Account balance " + str4 << endl;
		cout << "Month of the year " + str5 << endl;


	
	}
		
	
}


