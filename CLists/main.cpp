#include <iostream>
#include <list>
#include <set>
#include <string>

#include <utility>


using namespace std;

int main() {
     // The methods for the list are very similar to that of the vector.
    list <int> li = {1, 2, 3, 4, 6, 7};
    printf("The list size %d\n"
                   " The front element %d\n "
                   "The back element %d\n" , li.size(),li.front(), li.back() );

    li.push_back(78);
    for(int v: li){
        cout <<v ;
    }

    // Pairs
    pair<int , int> p = {6,8};
    printf("The values are first  %d and second %d\n", p.first, p.second);

    // Sets
    set <string> pa = {"America", "China", "Jamaica", "Russia"};
    printf("The size of the set is %d\n The countries are\n", pa.size());

    pa.insert("Rwanda");

    for(string s:pa){  // Sets print out stuff in alphabetical order
        printf("%s\n",s.c_str());
    }

    //pa.end();
    //printf( "The last element is %s",pa.end());
    set <string>::iterator it = pa.find("China");
    if(it != pa.end()){
        cout << "Erasing ...." << *it << endl;
        pa.erase(it);
    }else{
        cout << "Not found " << endl;
    }

    cout << "__________________________"<<endl;
    // Insert duplicate element, set does not insert duplicates

    pa.insert("America");
    for (string sr:pa){
        cout << sr <<endl;
    }
    cout << "__________________________"<<endl;
    for(string s:pa){  // Sets print out stuff in alphabetical order
        printf(" %s\n ",s.c_str());
    }





    return 0;


}