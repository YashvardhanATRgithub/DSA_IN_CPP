#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
    int min = 0;
    for(int i = 0; i <= n-2; i++) {
        for(int j = i; j <= n-1; j++) {
            if(arr[j] < arr[min])
                min = j;
        }
        swap(arr[i], arr[min]);
    }
}

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


}

/*

input: 
6
13 46 24 52 20 9

output:
9 13 20 24 46 52 

*/