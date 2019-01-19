#include <iostream>
#include <vector>

using namespace std;

int insertionsort(int *A, int n){
    int value , index;
    for(int i =1 ; i < n; i++){
        value = A[i];
        index = i;
        while(index>0 && A[index-1]>value){
            A[index] = A[index-1];
            index--;
        }
      A[index] =value;
    }
}

int main() {
    int b [] = { 2,4,5,6};
    int n = 4;
    insertionsort(b, n);
    //std::cout << "Hello, World!" << std::endl;

    vector<vector<int >>stuff;
    for(int i = 0 ; i < 5; i++){
        vector<int >temp;
        for(int j = 0 ; j<4; j++){
            temp.push_back(i);
        }
    }
    for(int i = 0 ; i < stuff.size(); i++){
        for(int j = 0 ; j<stuff[i].size(); j++){
            cout << stuff[i][j];
        }
        cout << endl;
    }

    return 0;
}

void insertionsort3(int *A, int n){
    int value, index;
    for (int i = 1; i<n ; i++){
        value = A[i];
        index = i;
        while(index >0 && A[index-1]>value){
            A[index]= A[index-1];
            index --;
        }
        A[index]= value;
    }
}