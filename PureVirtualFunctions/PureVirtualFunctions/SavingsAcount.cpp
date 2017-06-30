#include "SavingsAcount.h"
#include "BankAccount.h" 
#include <iostream> 

Savings::Savings(double initialBalance, double interestRate)
	:BankAccount(initialBalance),interestRate(interestRate), frozen(false)
{
}

Savings::~Savings()
{
}

void Savings::earnInterest()
{
	if (!frozen) {
		double interest = balance * (interestRate / 100);
		deposit(interest); 
	}
}

void Savings::deposit(double amount)
{
	if (!frozen) {
		BankAccount::deposit(amount);
		log("Deposit :" + to_string(amount));

	}
}

void Savings::withdraw(double amount)
{
	if (!frozen && amount <= balance) {
		BankAccount::withdraw(amount);
		log("Withdraw: " + to_string(amount));
	}
}

string Savings::getTermsandConditions()
{
	return "This is a savings account , You cannot go overdrawn. You earn Interest";
}

double Savings::getGuaranteedLimit()
{
	return 75000; // If the bank goes broke they pay you this much , the Regulator. 
}

void Savings::log(const string & message) const
{
	cout << message << endl;
}

void Savings::freeze()
{
	frozen = true;
}

void Savings::unfreeze()
{
	frozen = false;
}
