#include "Course.h"
#include <iostream>
using namespace std;

Course::Course()
{
}

Course::Course(Student * students, Teacher * two)
{
	student = students;
	teacher = two;

}

Course::~Course()
{
}

void Course::SetStudent(Student * stu)
{
	student = stu;
}

Student * Course::GetStudent()
{
	return student;
}

void Course::SetTeacher(Teacher * tea)
{
	teacher = tea;
}

Teacher * Course::GetTeacher()
{
	return teacher;
}

void Course::GradeStudent()
{
	cout <<"Student Graded" << endl;
}




