#include<bits/stdc++.h>
using namespace std;

void iterateVectors() {

    vector <int> v;
    v.push_back(4);
    v.push_back(9);
    v.push_back(6);
    v.push_back(3);

    // iterating in a vector
    for(vector <int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    cout << endl;

    // iterating in a vector using auto datatype
    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    cout << endl;

    // iterating in vector using auto and for-each loop
    for(auto it : v) {
        cout << it << " ";     // you don't have to write *(it). Just write 'it'
    }
}

int main() {

    iterateVectors();
}