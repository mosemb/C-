//
// Created by root on 2017/08/15.
//

#include "Flower.h"
#include <iostream>

Flower::~Flower() {
    //cout << "in destructor";

}

Flower::Flower() {

}

Flower::Flower(string name, int petals, double amount)
        :flower_name(name), petal_no(petals),price(amount)
{
}

void Flower::set_name(string name) {
    flower_name = name;
}

string Flower::get_name() const {
    return flower_name;
}

void Flower::set_petals(int petal) {
    petal_no = petal;
}

int Flower::get_petals() const {
    return petal_no;
}

void Flower::set_price(double prc) {
    price = prc;
}

double Flower::get_price() const {
    return price;
}




