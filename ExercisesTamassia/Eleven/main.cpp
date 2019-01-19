#include <iostream>
#include "Flower.h"

int main() {
    //std::cout << "Hello, World!" << std::endl;
    Flower h;
    h.set_name("Mozilla");
    h.set_petals(2);
    h.set_price(200.75);

    Flower("Jasmine",12,200.23) ;
    cout << "Flower name " + h.get_name();





    return 0;
}