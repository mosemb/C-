#include <iostream>
#include <string>

using namespace std;

int main(int argc, char ** arg) {

	int x{ 2 };
	int y{ 0 };
	
	if (x > 3) {

		y++;
	}

	else
	{
		y--;
	}


	for (int i{ 0 }; i < x; i++)

	{
		cout << i << endl << "For Loop" << endl ;

	}


	while (x < 4) {


		int j{ 2 };
		x += j;

		cout << "Bigining of while loop " << endl << j << endl;

	}

   y = x++;

   switch (x)
   {
   case 4:
	   cout << "x is four " << endl;
	   break;

   case 5:
	   cout << "x is 5 " << endl;
	   break;

   case 6:
	   cout << "x is 6" << endl;
	   break;

   default:
	   cout << "x is less that 4 or more than 6 " << endl;
	   break;





   }

   return 0;


}