//
// Created by root on 2017/08/15.
//

#ifndef ELEVEN_FLOWER_H
#define ELEVEN_FLOWER_H

#include <string>
using namespace std;

class Flower {
private:
    string flower_name;
    int petal_no;
    double price;

public:
    ~Flower();
    Flower();
    Flower(string name , int petals , double amount);

    void set_name( string name);
    string get_name() const ;

    void set_petals(int petal);
    int get_petals() const ;

    void set_price(double prc);

    double get_price() const;



};


#endif //ELEVEN_FLOWER_H
