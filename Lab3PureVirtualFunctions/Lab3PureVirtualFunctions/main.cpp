#include "person.h"
#include "Student.h"
#include "Teacher.h"

int main(int arg , char ** argc) {

	Student stu;
	stu.setYearofStudy(3);
	stu.setAge(5);
	stu.OutputIdentity();
	


	Teacher t; 
	t.OutputIdentity();
	t.OutputAge(); 


}
