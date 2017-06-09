#include <iostream>
#include <cstdio>
using namespace std; 






void pow(int base, int exp) 
	{

		if (base <=0 )
		{
			cout << "Please enter a positive number for the base" << endl;
		}
		else if (exp <=-1)
			{

			cout << "Please enter a positive number for the exponent" << endl;
		}
		else
		{
			int product = 1;

			for (int i = 1; i < exp +1; i++)
			{
				product = product * base;
			}

			//return product;

			cout << "Product -" << product << endl;
		}
	}

	
void sine( double opposite , double hypotnuse) {

	double sineoftri = opposite / hypotnuse;
	printf( "Sine of Triangle %f\n" , sineoftri);

}


int main(int argc, char ** arg)
{
	double ab;
	double bc;
	printf("Enter the opposite \n");
	cin >> ab;
	printf("Enter the hypotnuse \n");
	cin >> bc;
    sine( ab , bc);

	printf("___________________________________________ \n");
	printf("Exponentials \n");
	int a;
	int b;
	printf ("Enter base \n"); 
	cin  >> a;
	printf ( "Enter exponent \n" );
	cin >> b;
	pow(a,b);
	
	return 0;


}

