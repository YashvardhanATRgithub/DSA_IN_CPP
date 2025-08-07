#include<bits/stdc++.h>
using namespace std;

void insertInVectors() {

    // intializing a vector v with 2 instances of 100 
    vector <int> v(2,100); // ==> {100 100}

    // inserting 300 at 0th index
    v.insert(v.begin(), 300); // ==> {300 100 100}

    // inserting 2 instances of 10 at index 1
    v.insert(v.begin()+1, 2, 10); // ==> {300 10 10 100 100}

    // Copy in vectors
    vector<int> copy(2,50);
    v.insert(v.begin(), copy.begin(), copy.end()); // ==> {50, 50, 300 10 10 100 100}
}

int main() {

    insertInVectors();
}