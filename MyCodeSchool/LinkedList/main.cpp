#include <iostream>
#include "Link.h"

using namespace std;

int main() {
    Link *temp ;
    std::cout << "How many numbers " << std::endl;
    int n , x;
    cin>> n;

    for(int i = 0; i<n; i++){
        cout << "Enter number ";
        cin>> x;
        temp->insert(x);
    }
    temp->print();
    return 0;
}