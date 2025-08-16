#include<bits/stdc++.h>
using namespace std;

// reverses array using 2 pointer
void revArrayDoubleP(int arr[], int l, int r) {
    if(l >= r) return;
    swap(arr[l], arr[r]);
    revArrayDoubleP(arr, l+1, r-1);
}

// reverses array using one pointer
void revArraySingleP(int arr[], int i, int n) {
    if(i >= n/2) return;
    swap(arr[i], arr[n-1-i]);
    revArraySingleP(arr, i+1, n);
}
int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i =0; i < n; i++) {
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    revArrayDoubleP(arr, 0, n-1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    revArraySingleP(arr, 0, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}

/*

input: 
6
4 7 5 9 2 3

output:
4 7 5 9 2 3 ==> Original Array
3 2 9 5 7 4 ==> Reversed array
4 7 5 9 2 3 ==> Reversed so array become original array

*/