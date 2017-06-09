#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **arg) {

	{
		char enter;
		cout << "Enter y or Y , n or N" << endl;
		cin >> enter;

			switch (enter)

			{
			case 'y':
				cout << "you entered y" << endl;
				break;
			case 'Y':
				cout << "You entered Y" << endl;
				break;
			case 'n':
				cout << "You entered n" << endl;
			case 'N':
				cout << "You entered N" << endl;
				break;
			default:
				cout << "You entered non of the above" << endl;
				break;




			}

	}

	

}