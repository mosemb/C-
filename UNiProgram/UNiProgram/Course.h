#include <vector>
#include "Teacher.h"
#include "Student.h"
using namespace std;


#pragma once

class Course {
private:
	Student *student;
	Teacher *teacher; 
public:
	Course();
	Course(Student *students, Teacher *two);
	~Course();

	void SetStudent(Student *stu);
	Student *GetStudent();

	void SetTeacher(Teacher *tea);
	Teacher *GetTeacher();

	void GradeStudent(); 
};
