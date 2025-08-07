#include<bits/stdc++.h>
using namespace std;

void explainSorting() {

    int arr[] = {1, 5, 3, 7, 2};

    sort(arr, arr + 5);
    for( int itr : arr) {
        cout << itr << " "; // Prints { 1 2 3 5 7 }
    }
    cout << endl;

    // if vector is present
    vector<int> vtr  = {1, 5, 3, 6, 2};

    sort(vtr.begin(), vtr.end());
    for(int itr : vtr) {
        cout << itr << " "; // Prints { 1 2 3 5 6 }
    }

    cout << endl;

    // Sorting a range in array
    int arr1[] = {2, 5, 3, 7, 1};
    sort(arr1+2,  arr1+5);

    for(int itr : arr1) {
        cout << itr << " "; // Prints { 2 5 1 3 7 }
    }

    cout << endl;

    // Sorting in descending order
    int arr2[] = { 2, 5, 3, 7, 1 };
    sort(arr2, arr2 + 5, greater<int>());

    for(int itr : arr2) {
        cout << itr << " "; // Prints { 7 5 3 2 1 }
    }



}

int main() {
    explainSorting();
}