#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2) {
    if(p1.second > p2.second) return true;
    if(p1.second < p2.second) return false;
    // if both conditionals above not executed,
    // then both pair second element is same

    if(p1.first > p2.first) return true;
    return false;
}

void explainExtra() {

    pair<int, int> a[] = {{1,2}, {2,1}, {4,1}};

    // sort it according to second element
    // if second element is same, then sort it according to first
    // element but in decreasing order

}