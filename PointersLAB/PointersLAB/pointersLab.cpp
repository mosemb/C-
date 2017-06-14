#include <iostream>
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
	string name; 
	double age;
	double height;
	double weight;


	

};

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






	



}