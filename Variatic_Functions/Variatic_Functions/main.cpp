#include <cstdio>
#include <cstdarg> // This is needed for variant functions. 
#include <iostream>
#include "preproc.h"
#define FOO
#include "conditional.h"


using namespace std;

unsigned long int factorial(unsigned long int n) {

	if (n<2)
		return 1; 
	else
	{
		return factorial(n - 1)*n; 
	}

}

double average(const int count, ...) { // ... means the variables that are going to be used will be varying 
	 
	va_list ap;
	int i;
	double total = 0.0;

	va_start(ap, count);
	for (i = 0; i < count; ++i) {
	total += va_arg(ap, double);
	}
	va_end(ap);
	//cout << total << endl;
	return total / count;	
}

int message(const char *fmt, ...) {
	va_list ap;
	va_start(ap, fmt);
	int rc = vfprintf(stdout, fmt, ap);
	puts("");
	va_end(ap); 
	return rc;
}

int main(int argc, char **argv) {
	

	//message("This is a message");
	//average(5, 1.0, 3.5, 6.8, 6.3, 4.6);
	//unsigned long int n = 7; 
	//message("Average is  %lf\n", average(5, 1.0, 3.5, 6.8, 6.3, 4.6));
	//message("The factorial of %ld is %ld", n, factorial(n));

	printf("Preprocessor for %d\n", ONE);
	printf("Preprocessor for %d\n", _iONE);
	printf("Preprocessor for constant string %s\n", _sONE);
	printf("Preprocessor for FOO %d\n", NUMBER); 

	return 0;

}