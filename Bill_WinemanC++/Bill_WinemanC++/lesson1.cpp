#include <iostream>
#include <cstdio> 


using namespace std;

int main(int arg, char **agrc) {

	// Variables 
	int x = 42;
	printf("x is %d\n", x); 
	

	// Pointers
	// Uncoment as needed. 
	/*
	x = 73;
	int y = 7;
	int *z = &x;
	//int &y = x;

	printf("x is %d \n", x);
	printf("y is %d \n", y);
	printf("z* is %d \n", *z);

	z = &y;
	printf("x is %d \n", x);
	printf("y is %d \n", y);
	printf("z* is %d \n", *z);

	// Refrences
	y = x;
	printf("y is %d \n", y);
	//int &y = x;
	//printf("y with a refrence sign is %d \n", y);
	*/

	// Arrays
	int ia[5];
	ia[0] = 1;
	*ia = 1; 
	int *ip = ia;
	*ip = 2;
	ip++;

	int pn[5] = { 1,2,3,4,5 }; // This a new feature in c++ 11. 

	cout << "For Statements Prints." << endl;


	// Charaters
	char s[] = "string"; // Astring in c++ can be seen as an array. 
	for (int i = 0; s[i]; i++) {
		printf("Character %c\n", s[i]);

	}

	// Same solution can be got using a pointer

	for (char *pa=s; *pa;  pa++) {
		printf("Character Pointer %c\n", *pa);

	}

	// Same solution can still be got with a range for loop
	for (char c : s) {
		if (c == 0)break;
		printf("Character Range based loop  %c\n", c);
	}

	cout <<"Conditional Statements Prints." << endl;

	// Conditional Experssions/ Statements 
	int ba = 8;
	int bd = 9;
	
	if (ba < bd) {
		cout <<"True ba is greater " <<endl;
	}
	else {
		cout << "Wrong bd is greater " << endl;
	}


	// Switch statement. 
	cout << "Switch statement Prints " << endl;

	int swt = 3;
	const int ione = 1;
	const int itwo = 2;
	const int ithree = 3;
	switch (swt)
	{
	case ione:
		puts("One");
		break;
	case itwo:
		puts("Two");
		break;
	case ithree:
		puts("Three");
		break;
	default:
		puts("default");
		break;
	}


	printf("While Loop  --------------------------- \n"); 
	// Prints out the values of a loop initialized from 0 to 5

	int arrwhile[5] = { 1, 2, 3, 4 , 5 };
	int i = 0; 
	
	
	while (i < 5)
	{
		printf("element %d is %d\n" , i, arrwhile[i]);
		i++; 
	}
	printf("Do While Loop  --------------------------- \n");

	// When running the do while loop comment out the while loop Because it will take in the i of the while loop which is already 5
	
	do
	{
		printf("Do While element %d is %d \n", i, arrwhile[i]);
		i++;

	} while (i<5);

	printf("The for loop ----------------------------------\n");
	int foraary[5] = { 1, 2 , 3, 4, 5 }; 
	for (int i = 0; i < 5; i++) {
		printf("Element For Loop  %d is %d \n",i, foraary[i] ); 

	}

	// For Loop with a Pointer
	printf("The for loop with pointer  ----------------------------------\n");
	char forchar[] = "Rainbow";
	char d[] = {'a', 'b', 'c', 'd',0};
	for (char *ip = forchar; *ip; ip++) {
		printf("Element For Loop with pointer %c  \n", *ip);
		//cout << ip << endl;
	}


	
	// Range based for loop 
	printf("Range based  for loop with pointer  ----------------------------------\n");
	int ga[] = { 1,2,3,4,5 };
	for (int ia :ga ) {
		//if (ia == 0) break;
		printf("Element is %d \n", ia);
	}

	// Range based for loop String 
	printf("Range based for loop String ______________\n");
	char forc[] = "Lacazette";
	for (char c : forc) {
		if (c == 0)break;
		printf("Elements %c\n", c);
	}






	return 0; 



}