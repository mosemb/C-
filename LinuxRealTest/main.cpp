#include <iostream>
#include <cstdio>

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
    int m;


    return 0;
}