#include<bits/stdc++.h>
using namespace std;

void explainPair() {

    pair<int, int> p = {1, 3};
    cout << p.first <<" " << p.second << endl;

    // Output: 1 3

    pair <int, pair<int,int >> a = {1, {3,4}};
    cout << a.first <<" "<< a.second.first << " " << a.second.second << endl;

    // Output: 1 3 4

    pair <int, int> arr[] = {{2,3}, {4,1}, {5,1}};
    cout <<arr[1].second;

    // Output: 1
}

int main() {

    explainPair();
    
}