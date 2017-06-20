#include <iostream>
#include <string>
using namespace std;



void PassByValue(int x) {

	cout << "In passby Value" << endl;
	x++;
	cout << x << endl; 
}

void PassByRefrence(int & y) {

	cout << "in passby ref" << endl;
	y++;
	cout << y << endl;

}







class Person {
private:
	string fname; 
	string lname;
	double age;
	double height;
	double weight;

public:
	//Person();
	Person(string first_n, string last_n, double age_a, double height_h, double weight_w)
	{

		SetFirstName(first_n);
		SetLastName(last_n);
		SetAge(age_a);
		SetHeight(height_h);
		SetWeight(weight_w);

	}

	void SetFirstName(string first_name) {
		fname = first_name;

	}
	string GetFirstName() {
		return fname;

	}

	void SetLastName(string lastname) {
		lname = lastname;

	}
	string GetLastName() {
		return lname;

	}

	void SetAge(double ages) {
		age = ages;

	}
	double GetAge() {
		return age;

	}

	void SetHeight(double heights) {
		height = heights;

	}
	double GetHeight() {
		return height;
	}


	void SetWeight(double weights) {

		weight = weights;
	}
	double GetWeight() {
		return weight; 
	}
};

void ModifyPerson(Person person()) {
	

}


int main(int argc, char **arg) {

	int num1; 
	int *pnum = &num1;
	double *num2 = new double;
	*num2 = 5.0;

    num1 = 3;
	
	//int &pnum = 5;
	*(int *)pnum = 50;  // store int value 10 at address 0x16
    
    //PassByValue(num1);
	//PassByRefrence(num1);

	cout << "In main double " << num2 << endl << *num2 << endl; 

	/*
	Person without a constructor 

	Person setter;
	setter.SetFirstName("James");
	setter.SetLastName("Lumia ");
	setter.SetAge(45.0);
	setter.SetHeight(7.4);
	setter.SetWeight(67);


	cout << setter.GetFirstName() << endl << setter.GetLastName()
	<< endl << setter.GetAge() << endl << setter.GetWeight() << endl
	<<setter.GetHeight() << endl;

	*/

	
	Person person( "Ricky " , "Martin ", 23.4 , 56, 78.4);
	cout << person.GetAge() <<endl;
	








	



}