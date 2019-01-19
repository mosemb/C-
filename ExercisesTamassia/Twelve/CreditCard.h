//
// Created by root on 2017/08/15.
//

#ifndef TWELVE_CREDITCARD_H
#define TWELVE_CREDITCARD_H
#include <string >
using namespace std;



class CreditCard {
private:
    string number;
    string name;
    int limit;
    double balance;

public:
    ~CreditCard();
    CreditCard(const string& no, const string & nm, int lmt , double blc);

    string getNumber() const ;
    string getName() const;
    int getlimit() const ;
    int getbalance() const ;

    bool chargeIt(double price);
    void makePayment(double payment);




};


#endif //TWELVE_CREDITCARD_H
