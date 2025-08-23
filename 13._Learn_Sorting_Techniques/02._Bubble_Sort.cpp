#include<bits/stdc++.h>
using namespace std;

// Takes O(n^2) Each Case
void bubbleSort(int arr[], int n) {

    for(int i = n-1; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }

}

// Takes O(n) in best case scanario when array is already sorted
void modifiedBubbleSort(int arr[], int n) {
    int swapCount = 0;
    for(int i = n-1; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
                swapCount = 1;
        }
        if(swapCount == 0)
            break;
    }
}

int main() {

    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    bubbleSort(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}