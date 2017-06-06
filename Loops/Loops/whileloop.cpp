#include <iostream>
#include <string>
#include <cstdio>


using namespace std;

int main(int argc, char ** arg) {

	{
		string response; 

		cout << "Enter your response" << endl << "More" << endl << "Quit" << endl;
		cin >> response; 

		while (response != "Quit ") {
			cout << "Enter your response " << endl << "More" << endl << "Quit " << endl;
			cin >> response; 
			
		}
	}

	return 0;
}