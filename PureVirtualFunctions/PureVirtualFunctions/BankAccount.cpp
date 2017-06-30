#include "BankAccount.h"

BankAccount::BankAccount(double initialbalance)
	:balance(initialbalance)
{
}



BankAccount::~BankAccount()
{

}

double BankAccount:: getbalance(double balan) const
{
	return balance; 
}

void BankAccount::deposit(double amount)
{
	balance += amount;
}

void BankAccount::withdraw(double amount)
{
	balance -= amount;

}
