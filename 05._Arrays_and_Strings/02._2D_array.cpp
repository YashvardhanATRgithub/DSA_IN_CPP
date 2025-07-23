#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][5]; // a matrix with 3 rows and 5 columns
    arr[2][3] = 78;

    cout<<arr[2][3]<<endl;

    // below cout gives garbage value
    cout<<arr[1][1];

}

// If you don't assign a value to a index of an array, then
// by default garbage values are stored at that index
