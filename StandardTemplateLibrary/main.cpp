#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main() {

    vector<int> vil = {1, 2, 3, 4};
    vector<int> vil2 = {1, 6, 4, 7};
    int sum = 0;
    int sum2 = 0;
    //for(int i : vil) {
    //cout << i << endl;
    //  cout << vil.size()-1 <<endl;
    // }
    for (int i = 0; i < vil2.size(); ++i) {
        if (vil[i] > vil2[i]) {
            sum = sum + 1;
        } else if (vil[i] < vil2[i]) {
            sum2 = sum2 + 1;
        } else {
            sum;
            sum2;
        }
        //cout << "indicies " << i << endl;
        cout << "Sum 1  " << sum << "Sum 2 " << sum2 << endl;
        //cout << vil[i] <<  endl << vil2[i] << endl;
    }


    for (auto i : vil) {
        if (vil[i] > vil2[i]) {
            sum = sum + 1;

        } else if (i < vil.at(i)) {
            sum2 = sum2 + 1;

        } else {
            sum;
            sum2;
        }

    }

        // cout << "The sum is "<< sum <<"The sum is " << sum2;


        //vector <int>::iterator it;

        // vector <int>::iterator start = vil.begin();
        //vector <int>::iterator end = vil.end();


        /*
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

        cout << vil.size() << endl;
    */
        return 0;


}