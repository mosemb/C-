#include <iostream>
#include "A.h"
#include "Animal.h"


template <class TV>
class Turtle {
private:
    TV variable1;
    TV variable2;

public:
    Turtle(TV a, TV b){
        variable1 =a;
        variable2 = b;
    }
 TV bigger();



};

template <class TV>
TV Turtle<TV> ::bigger() {
    return (variable1>variable2?variable1:variable2);

}
struct A{
    int ia;
    int ib;
    int ic;

};
template <class T> T maxof(T a, T b){ // <typename T> will as well do the same thing. as <class T>
    return (a>b?b:b);
}
// Generic with 2 types of data
template <class FIRST , class SECOND> FIRST smaller (FIRST a, SECOND b){ // <typename FIRST , typname SECOND> can do as well
    return (a<b?a:b);
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
    cout << "The size of char "<<  sizeof(double ) << endl;
    printf("The max is %d\n", maxof<int>(8,10));
    cout << "The smaller  is " << smaller(9.6,90.4)<<endl;

    //Temp_lates <int>ba(78,90);
    //ba.bigger();

    Turtle <int>ba(78,98);
    ba.bigger();
    printf(" (Class Template) The bigger is ,%d\n", ba.bigger());

   printf("The cow name is %s and its type is %s and its sound is %s\n",
          cow.getname().c_str(), cow.gettype().c_str(), cow.getsound().c_str());



    return 0;
}