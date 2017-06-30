#include <string>
#include <iostream>

#include "Person.h"
#include "Student.h"
using namespace std;

void demonstration1(Person *ptr);
void demonstration2(Person &p);

int main(int arg, char** argc) {

	Person *p = new Student("John", 24, "Physics");

	p->display();
	demonstration1(p);
	demonstration2(*p); 

	delete p;
}

void demonstration1(Person *ptr) {
	ptr->display();
}

void demonstration2(Person &p) {
	p.display();
}