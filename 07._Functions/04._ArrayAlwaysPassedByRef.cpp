#include<bits/stdc++.h>
using namespace std;


// Array is always passed by reference
// Whatever you change in this function will change the array outside it

void doSomething(int arr[], int n) {
    arr[0] = 420;
    cout<<arr[0]<<endl;
}

int main() {
    int n;
    cin>>n;

    int arr[n];

    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }

    doSomething(arr,n);
    cout<<arr[0];

}

/*
input: 5
       4 8 3 7 5

output: 420
        420
*/