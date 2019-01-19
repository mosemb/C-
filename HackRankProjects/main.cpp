#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

long bigsum(int n, vector<long>arp, long ap){
    cout << "And the size of vector is " << arp.size() << endl;
    long sum =0;
    for(auto i : arp){
        sum = sum +i;
    }
    cout << "The big sum is " << sum << endl;
    return sum;
}

int main() {
    int n;
    vector<long>ar;
    long a;
    printf("Enter the values of the array and the inputs ");
    cin >> n;
    for (int i =1; i<=n; ++i)
    {
        cin >>a;
        ar.push_back(a);
        cout << i << endl;
        //printf("The size of ar is %d\n", ar.size());
    }

    bigsum(n,ar,a);
    int rows = 5;
    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}

