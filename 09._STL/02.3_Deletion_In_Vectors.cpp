#include<bits/stdc++.h>
using namespace std;

void deleteInVectors() {

    vector <int> v;
    v.push_back(4);
    v.push_back(9);
    v.push_back(6);
    v.push_back(3);
    v.push_back(2);
    v.push_back(8);
    v.push_back(11);
    v.push_back(13);

    // vector: [4, 9, 6, 3, 2, 8, 11, 13]

    // Erasing element at specific location
    v.erase(v.begin() + 1);

    // vector after deletion: [4 6 3 2 8 11 13 ]
    for(auto it : v) {
        cout << it << " ";
    }


    cout<< endl;


    // Erasing range of elements
    v.erase(v.begin()+2, v.begin()+4);  // it deletes elements from index 2 to 3

    // vector after deletion: [4 6 8 11 13 ]
    for(auto it : v) {
        cout << it << " ";
    }
}

int main() {

    deleteInVectors();
}