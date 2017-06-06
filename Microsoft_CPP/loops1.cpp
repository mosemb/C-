#include <cstdio>
#include <string>
#include <iostream>
#include <string.h>

using namespace std;


int loops_main(int argc, char ** arg) {

	{
		string response;

		cout << "Enter menu choice  " << endl << "More" << endl << "Quit" << endl;
		cin >> response;

		while (response != "Quit") {

			cout << "Enter menu choice " << endl << "More" << endl << "Quit" << endl;
			cin >> response;

		}



		return 0;

	}

}