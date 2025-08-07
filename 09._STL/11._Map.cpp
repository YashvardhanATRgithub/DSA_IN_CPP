#include<bits/stdc++.h>
using namespace std;

void explainMap() {

    map<int, int> mpp1;
    mpp1[1] = 2;
    mpp1.emplace(3, 1);
    mpp1.insert({2, 4});

    for(auto it: mpp1) {
        cout << it.first << " " << it.second << endl;
    }
    /*

    Output:
    1 2
    2 4
    3 1
    
    */

    map<int, pair<int, int>> mpp2;
    mpp2[1] = {2, 3};
    mpp2[0] = {4, 2};
    mpp2[2] = {9, 7};

    for(auto it: mpp2) {
        cout<< it.first << " " << it.second.first << " " <<  it.second.second << endl;
    }

    /*

    Output:
    0 4 2
    1 2 3
    2 9 7
    
    */


    map< pair<int, int>, int> mpp3;
    mpp3[{2, 3}] = 10;
    mpp3[{0, 1}] = 20;
    mpp3[{1, 4}] = 30;

    for(auto it : mpp3) {
        cout << it.first.first << " " << it.first.second << " " << it.second << endl;
    }

    /*

    Output:
    0 1 20
    1 4 30
    2 3 10
    
    */

    // to find address of a key and then print the corresponding value

    auto it = mpp1.find(3);
    cout << (*it).first << " ==> " << (*it).second << endl;
    // Output: 3 ==> 1  || note that it's (*it).first not *(it).first

    // accessing a key which is not availabe
    auto it1 = mpp1.find(5);
    cout << (*it1).first << " ==> " << (*it1).second << endl;
    // Output: 3 ==> 0 
    // It prints last key i.e. 3 and corresponding value as 0 

    // Upper bound and lower bound

    auto it2 = mpp1.lower_bound(2);
    cout << (*it2).first << endl; // Prints 2

    auto it3 = mpp1.upper_bound(3);
    cout << (*it3).first << endl; // Prints 3

    
}

void explainMultimap() {
    // everything same as map, difference is that it can store duplicate keys
    // only mpp[key] cannot be used here
}

void explainUnorderedMap() {
    // same as set and unordered set difference i.e. unsorted keys
    // O(1) tc in most of the case
}

int main() {
    explainMap();
    explainMultimap();
    explainUnorderedMap();
}