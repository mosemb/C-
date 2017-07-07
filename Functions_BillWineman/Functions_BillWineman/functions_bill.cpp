#include <iostream>
#include <cstdio>
#include <string>
using namespace std;


// Pass by reference 

void func(string &s) {
	printf("The value of func %s \n", s.c_str());


	
}

void fa() {
	printf("This is fa()");

}

void fb() {
	printf("This is fb");
}

void fc() {
	printf("This is fc");
}

void fd(){
	printf("This is fd");

}

void fe() {
	printf("This is fe"); 
}

void(*arraypointers[]) () = { fa, fb , fc, fd , fe , nullptr }; 

const char *prompt() {
	printf("Choose an option \n");
	printf("1.Function fa \n");
	printf("2.Function fb \n");
	printf("3.Function fc \n");
	printf("4.Function fd \n");
	printf("5.Function fe \n ");
	printf("Q.Quit \n");
	printf(">>  \n");

	fflush(stdout); // Flush after prompt
	const int buffsz = 16; // Constant for buffer size 
	static char response[buffsz]; // Static response for response 
	fgets(response, buffsz, stdin);// Get Response from console 

	return response;
}

int jump( const char * rs) {
	char code = rs[0];
	if (code == 'q' || code == 'Q') return 0;

	// Count the length of funcs array
	int func_length = 0;
	while (arraypointers[func_length] != NULL)func_length++;

	int i = (int)code - '0';
	i--;

	if (i < 0 || i >= func_length) {
		printf("Invalid choice ");
		return 1; 
	}
	else {
		arraypointers[i]();
		return 1; 
	}

}

int main(int arg, char **argv) {
	
	//void (*fa)(string &s) = func;
	//string sa = "Hi there";
	
	while (jump(prompt()));
	printf("Done/n");
	
	return 0;
}


