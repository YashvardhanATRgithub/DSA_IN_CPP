#include<bits/stdc++.h>
using namespace std;

void findMinMax(int arr[], int size) {

    int maxEle = *max_element(arr, arr + size);
    cout << "Max element: " << maxEle << endl; 

    int minEle = *min_element(arr, arr + size);
    cout << "Min element: " << minEle << endl; 
}

int main() {

    int size = 5;
    int arr[size] = {10, 12, 9, 8, 17};

    findMinMax(arr, size); // Prints Max element: 17 | Min element: 8
}