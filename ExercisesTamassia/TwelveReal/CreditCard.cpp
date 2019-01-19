//
// Created by root on 2017/08/15.
//

#include "CreditCard.h"

using namespace std;


CreditCard::~CreditCard() {

}

CreditCard::CreditCard() {

}

CreditCard::CreditCard(const string &no, const string &nm, int lmt, double blc) : number(no),
name(nm) , limit(lmt), balance(blc){
}

string CreditCard::getNumber() {
    return number;
}

string CreditCard::getName() {
    return name;
}

int CreditCard::getLimit() {
    return limit;
}

double CreditCard::getBalance() {
    return balance;
}

bool CreditCard::chargeIt(double price) {
    if(price +balance < double(limit))
    return false;
    balance +=price;
    return true;
}

void CreditCard::makePayment(double payment) {
    balance -= payment;
}

std::ostream &CreditCard::operator<<(std::ostream &out, const CreditCard &c) {
    out << "Number" << c.getNumber()  << "\n"
        << "Name " << c.getName() << "\n"
        << "Limit" << c.getLimit() << "\n"
        <<  "Balance" << c.getBalance() << "\n";


    return out;
}






