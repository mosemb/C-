#include <iostream>
using namespace std;

//Recursive function

int f(int k ){
    if(k==0){
        return 0;
    } else {
        return  2*f(k-1)+k*k ;

    };

}



int sums(int x , int y ){
    int z = x+y;
    return z;
}

int main() {
    char a[7] = {'a', 'b ', 'c', 'd', 'e', 'f', 'g'};
    char *ptr = a;
    char* tr = &a[0];

    //cout << "He" ;

    //cout << f(3) ;
    enum Day { SUN, MON, TUES, WEN, THUR, FRI , SAT };
    enum Mood { HAPPY =1, SAD = 2, ANXIOUS = 3, SLEEPY = 4};
    Day today = SUN;

    int x , y;
    sums(x, y);
    cout << "Enter the numbers x, and y";
    cin >> x >> y ;
    cout << sums(x,y);


    return 0;
}