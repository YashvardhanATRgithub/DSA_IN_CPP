#include<bits/stdc++.h>
using namespace std;

void explainVector() {

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2); // faster than push_back()

    // pair inside vector

    vector< pair<int, int> > vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    // vector with predefined size and instance

    vector <int> v(5,100);

    // vector with predefined size

    vector <int> v(5);

    // copying one vector to another

    vector <int> v1(5,100);
    vector <int> v2(v1);

    
}