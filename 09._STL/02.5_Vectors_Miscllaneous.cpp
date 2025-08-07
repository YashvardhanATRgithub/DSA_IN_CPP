#include<bits/stdc++.h>
using namespace std;

void miscInVectors() {

    // Intializing a vector
    vector<int> v(3, 100);

    // Finding no. of elements in vector v
    cout << v.size() << endl;

    // popping out last element in a vector
    v.pop_back();

    // Swapping all elements between two vectors

    vector<int> v1(4, 10); // ==> {10 10 10 10}
    vector<int> v2(4, 20); // ==> {20 20 20 20}

    v1.swap(v2);
    /*

    v1 ==> {20 20 20 20}
    v2 ==> {10 10 10 10}
    */

    // Erase the entire vector
    // v = {10, 9, 11, 13}
    v.clear(); // ==> v = { }

    // check whether a vector is empty or not
    // v = { }
    cout << v.empty();

}

int main() {

    miscInVectors();

}