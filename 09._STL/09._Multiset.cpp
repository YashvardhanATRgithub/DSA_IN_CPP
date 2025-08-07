#include<bits/stdc++.h>
using namespace std;

void explainMultiset() {

    // multiset has sorted elements but it does not follow uniqueness of elements

    multiset<int> ms;
    ms.insert(1);   // {1}
    ms.insert(1);   // {1, 1}
    ms.insert(1);   // {1, 1, 1}

    // erasing elemets
    ms.erase(1); // erases all 1's unlike set   {1, 1, 1} ==> { }

    // {1, 1, 1}
    // counts number of ocuurence of a particular element
    int cnt = ms.count(1);
    cout << cnt; // prints 3

    // deleting a particular '1'
    ms.erase(ms.find(1)); // erases 1st occurence of '1'. {1, 1, 1} ==> {1,1}

    // deleting a range of elements

    auto start = ms.find(1);
    if(start != ms.end()) {
        auto end = start;
        advance(end, 2);    // advances to 3rd index
        ms.erase(start,end); // deletes from starting to 2nd index
    }
    

    // rest all functions are same as set

}

int main() {
    explainMultiset();
}