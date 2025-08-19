#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n] = {0};
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Pre compute
    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    // iterating through above ordered map
    for(auto it : mpp) {
        cout << it.first << "==>" << it.second << endl;
        // Prints key in ascending order
    }

    unordered_map<int, int> mpp1;
    for(int i = 0; i < n; i++) {
        mpp1[arr[i]]++;
    }

    // iterating through above unordered map
    for(auto it : mpp1) {
        cout << it.first << "==>" << it.second << endl;
        // Prints key in any order
    }

    int q;
    cin >> q;
    while(q--) {
        int number;
        cin >> number;
        //fetch
        cout << mpp[number] << endl;
    }
}

/*

input:
7 --> size of array containing elements to be stored in map
1 2 3 1 3 2 12 --> elements 
5 --> number of elements whose frequency to be found
1 --> element
2 --> element
3 --> element
4 --> element
12 --> element

output:

ordered map:
1==>2
2==>2
3==>2
12==>1

unordered map:
12==>1
3==>2
2==>2
1==>2

Frequency of elements
2
2
2
0
1

*/