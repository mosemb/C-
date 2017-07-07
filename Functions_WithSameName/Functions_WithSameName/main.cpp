#include <iostream>
#include <cstdio>
using namespace std; 

// These functions have the same name but have different parameters. The paramenters are the differentiating factor. 

double volume(double r, double h) {
	const static double pi = 3.141592653589793;
	printf("The volume of Cylinder %.3lf x %.3lf\n", r, h);
	return pi*r*r*h;

}

double volume(double h, double w, double r) {
	printf("The volume of a cube %.3lf x %.3lf x %3lf \n", h, w, r);
	return h*w*r;

}

double volume(double a) {
	printf("Cube of %.3lf\n ", a);
	return a*a*a; 
}

int main(int argc, char** argv) {

	printf("The Volume of the Cuboid is %.3lf\n", volume(7.7));
	printf("The Volume of the Cylinder is %.2lf\n", volume(6.4, 8.0));
	printf("The Volume of the Cube is %.1lf\n", volume(7.4, 5.7, 9.0)); 

}