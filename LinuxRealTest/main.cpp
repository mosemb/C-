#include <iostream>
#include "A.h"
#include "Animal.h"


struct A{
    int ia;
    int ib;
    int ic;

};
int main() {
    A a = {1, 2 , 3};
    printf("System print Struct A \n ia:%d\n ib:%d\n ic:%d\n ", a.ia, a.ib, a.ic);
    // if we had a pointer then
    A *pa = &a;
    printf("System print Struct A with Pointers \n ia:%d\n ib:%d\n ic:%d\n ", pa->ia, pa->ib, pa->ic);

    Ab b;
    b.setValue(43);
    printf ("The value of ia is %d ", b.getValue());

    Animal cow; //("Ricky", "Frezian", "Moo");

    cow.setname("Ricky");
    cow.settype("Fresian");
    cow.setsound("Moo");


   cout << cow.getname() <<endl;

   printf("The cow name is %s and its type is %s and its sound is %s ", cow.getname().c_str(), cow.gettype().c_str(), cow.getsound().c_str());




    return 0;
}