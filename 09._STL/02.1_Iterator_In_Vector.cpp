#include<bits/stdc++.h>
using namespace std;

void explainVector() {

    vector <int> v;
    v.push_back(4);
    v.push_back(9);
    v.push_back(6);
    v.push_back(3);

    // vector v becomes v = [ 4, 9, 6, 3]

    // begin() iterator
    vector<int>::iterator it1 = v.begin();
    it1++;
    cout << *(it1) << endl;

    // end() iterator
    vector<int>::iterator it2 = v.end();
    it2--;
    cout << *(it2) << endl; 

    // rend() iterator
    vector<int>::reverse_iterator it3 = v.rend();
    it3--;
    cout<< *(it3) << endl; 

    // rbegin() iterator
    vector<int>::reverse_iterator it4 = v.rbegin();
    it4++;
    cout << *(it4) << endl;

    // vector elements can also be accessed as an array

    cout << v[1] << endl;
}

int main() {

    explainVector();
}