#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main() {

    vector <int> vil = {1,2,3,4 };
    vector <int>::iterator it;

    vector <int>::iterator start = vil.begin();
    vector <int>::iterator end = vil.end();

    cout << "Print With Iterator"<<endl;

    for(it = vil.begin(); it<vil.end(); ++it){
        cout << *it <<endl;
    }

    printf("The vector size is %d\n "
                   "The front element is %d\n"
                   "The back element is %d\n"
           "The elements of the vector are \n"

            , vil.size(), vil.front(), vil.back());

    for(int i  =1;  i<=vil.size(); i++){
        cout << i<<endl;
    }

    cout << " Range based for loop " <<endl;
    for(int i :vil){
        cout << i << endl;

    }

    cout << "Element at Position two "<< vil[2] <<endl;

    // Inserting elements in the vector
    vil.insert(vil.begin(),78);

    cout << "Elements after insertion" <<endl;
    for(int i :vil){
        cout << i << endl;

    }


    cout << "Elements after Deletion" <<endl;
    vil.erase(vil.begin()+1);
    for(int i :vil){
        cout << i << endl;

    }
    cout << "Insert element at back " <<endl;
    vil.push_back(120);
    for(int i :vil){
        cout << i << endl;

    }




    return 0;

}