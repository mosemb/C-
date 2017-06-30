#pragma once

#include <string>
using namespace std;

class BankAccount {

protected:
	double balance; 
public:
	BankAccount(double initialbalance);
	virtual ~BankAccount();

	double getbalance(double bal) const; // we do not want this to be overriden in a subclass. 
	virtual void deposit(double amount);
	virtual void withdraw(double amount);

	virtual string getTermsandConditions()=0; // These functions have to be overidden in subclasses. 
	virtual double getGuaranteedLimit() = 0; // This as well has to be overidden in a subclass. 

};

