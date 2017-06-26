#include <iostream>
#include "Student.h"
#include "Teacher.h"
using namespace std;


int main(int argc, char **arg) {

	
	Student *one = new Student("John", "Micheal" , "Female", "Kigali" , 23, 778
	);

	cout << one->GetFirstName() << endl;

	Teacher *two = new  Teacher("Bryce", "James" , "Muhabura" , "Female" , 23.6 , 6789);

	cout << two->GetAge() << endl;
	
    //void Teacher::SitInClass(); 
	  two->SitInClass(); 
	
}