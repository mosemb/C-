#include <iostream>
#include <vector>
using namespace std;

struct Pair {
    int first;
    double second;
};


void print_ma()
{   int ma[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9 , 10 }, {11, 12, 13 , 14 , 15}};

    for (int i = 0; i!=3; i++) {
        for (int j = 0; j!=5; j++)
            cout << ma[i][j] << '\t';
        cout << '\n';
    }
}

int printArray(int *m, int *n){

}

int smallersum(int n,vector<int>vec ){
    int sum = 0;
    for(auto x : vec) {
        if(n>x){
            sum +=x;
        }
    }
    cout << "Sum is  " << sum ;
    return sum;
}

bool isMultiple(long m , long n){
    int i;
    i = 10;
    if (n==m*i){
        return true;
    }
    else {
        return false;
    }
}




int main() {
    print_ma();

    int twod[10][20];
    //for(int i=0; i<)

    double arr[10];
    double *ptr = arr;
    //std::cout << "Hello, World!" << std::endl;

    vector<int> tr = {1,2,3,4, 5, 6};
    int n = 6;
    //smallersum(n,tr);
    int sum = 0 ;
    for (auto x : tr){
        if(x<n){
            sum +=x;
        }
    }
    //smallersum(n,tr);
    //cout << "Sum is " << sum << endl;
   //cout << sum << endl;

    for(int i = 0 ; i<10; i++){
        arr[i] = 0.0;
        //cout << arr[i] ;
        //cout << ptr[i];
    }
    return 0;
}