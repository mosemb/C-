#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <numeric>
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

void avg(int ary[]) {
    
	int sum = 0; 
	for (int i = 0; i < sizeof(ary)/sizeof(ary[0]); i++)
	{
		sum += ary[i];
		int av = sum / sizeof(ary) / sizeof(ary[0]);
		printf("The average of the array is _  %d ", av);
	}

}


int sumsnos(vector <double> arr) {

	double sum = 0;
	for (double n : arr)
	{
	sum = sum+n;
	}
	cout << "The sum " << sum << endl;
	double nos = arr.size();
	double avg = sum / nos; 
	cout <<"Average " << avg << endl; 
	
		/*
		Another way to do sum for a vector 

		int sum = accumulate(arr.begin(), arr.end(), 0);
		cout << "The real sum " << sum << endl;
		*/

		return sum; 


		

}




int main(int argc, char ** arg)
{
	
	vector <double> myvector;
	double y; 

	cout << "Enter ints when done enter string x "<< endl;
	
	while (cin >> y)
	{
		myvector.push_back(y);

	}
   sumsnos(myvector);
	



	
	
	
	
	
	/*while (true){
		
		if (typeid(cin).name()!= typeid(k).name())
		{
			int sumsnos(vector <int > arr);
			//arr.push_back(y); 
		}
		else if (typeid(cin).name() == typeid(k).name())
		{
			break;
		}

	}
	*/

	

	 

	


	
    
	/* 

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


	*/
	
	
	return 0;


}

