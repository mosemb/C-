
#pragma once
#include "BankAccount.h"
#include "Freezable.h"
#include "Loggable.h"
#include <list>


class Savings : public BankAccount ,public Loggable , public Freezable{
private:
	double interestRate;
	bool frozen; 

public:
	Savings(double initialBalance, double interestRate);
	virtual ~Savings();

	void earnInterest();

	virtual void deposit(double amount);
	virtual void withdraw(double amount);

	//implimentation of pure virtual Functions from Bank account
	virtual string getTermsandConditions();
	virtual double getGuaranteedLimit(); 

	// implimentation of pure virtual Functions from Loggable 
	virtual void log(const string &message) const;

	// implimentation of pure virtual Functions from Freezable 
	virtual void freeze();
	virtual void unfreeze();


};
