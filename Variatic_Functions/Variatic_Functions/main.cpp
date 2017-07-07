#include <cstdio>
#include <cstdarg> // This is needed for variant functions. 
#include <iostream>
using namespace std;

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
	

	message("This is a message");
	//average(5, 1.0, 3.5, 6.8, 6.3, 4.6);

	message("Average is  %lf\n", average(5, 1.0, 3.5, 6.8, 6.3, 4.6));


}