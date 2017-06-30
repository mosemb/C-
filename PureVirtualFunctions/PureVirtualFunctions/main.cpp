#include "SavingsAcount.h"
#include <iostream>
using namespace std;

void freezeMe(Freezable &f) {
	f.freeze();

}

int main(int arg, char **argc) {

	
	Savings acc(1000, 2.5);
	cout << "Terms and Conditions :" << acc.getTermsandConditions() << endl;
	cout << "Guarantee Limit :" << acc.getGuaranteedLimit() << endl;
	acc.deposit(100);
	acc.deposit(200);
	acc.withdraw(50);
	acc.earnInterest();

	freezeMe(acc);

	
}