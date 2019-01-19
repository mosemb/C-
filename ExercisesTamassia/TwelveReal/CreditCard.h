//
// Created by root on 2017/08/15.
//

#ifndef TWELVEREAL_CREDITCARD_H
#define TWELVEREAL_CREDITCARD_H

#include <string>

using namespace std;


class CreditCard {
private:
    string number;
    string name;
    int limit;
    double balance;

public:
    ~CreditCard();
    CreditCard();
    CreditCard(const string & no, const string &nm , int lmt, double blc);

    string getNumber();
    string getName();
    int  getLimit();
    double  getBalance();

    bool chargeIt(double price);
    void makePayment(double payment);
    std::ostream & operator<<(std::ostream& out, const CreditCard& c);




};


#endif //TWELVEREAL_CREDITCARD_H
