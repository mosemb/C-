
#include <iostream>

using namespace std;

int main(int argc , char **arg) {

	int *pint = new int;
	double *pdouble = new double;

	*pint = 3;
	*pdouble = 5.0;


	cout << "*pint " << *pint << endl << "*pdouble" << *pdouble << endl;
	cout << "pint " << pint << endl << "pdouble" << pdouble << endl;

	cout << "Size of pint  " << sizeof (pint) << endl << "Since of  pdouble" << sizeof(pdouble) << endl;
	cout << "Size of *pint  " << sizeof(*pint) << endl << "Since of  *pdouble" << sizeof(*pdouble) << endl;
	
	delete pint;
	delete pdouble; 


	return 0; 

}