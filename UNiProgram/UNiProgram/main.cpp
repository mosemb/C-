#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include "Course.h"
using namespace std;


int main(int argc, char **arg) {

	
	Student *onet = new Student("John", "Micheal" , "Female", "Kigali" , 23, 778
	);

	cout << onet->GetFirstName() << endl;

	Teacher *two = new  Teacher("Bryce", "James" , "Muhabura" , "Female" , 23.6 , 6789);

	cout << two->GetAge() << endl;
	
    //void Teacher::SitInClass(); 
	  two->SitInClass(); 

	  Student *students[3];
	  Course *one = new Course(onet, two);

	  cout << one->GetStudent() << endl;








	  
	
}