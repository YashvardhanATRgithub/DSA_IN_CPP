#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> tempArr;
    int left = low;
    int right = mid+1;
    

    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            tempArr.push_back(arr[left]);
            left++;
        }
        else {
            tempArr.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid) {
        tempArr.push_back(arr[left]);
        left++;
    }
    while(right <= high) {
        tempArr.push_back(arr[right]);
        right++;
    }

    for(int i  = low; i <= high; i++) {
        arr[i] = tempArr[i-low];
    }

}


void mergeSort(vector <int> &arr, int low, int high) {

    if(low >= high) return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);

}
int main() {
    
    vector<int> vec = {13, 46, 24, 52, 20, 9};
    int n = vec.size();

    mergeSort(vec,0,n-1);

    for(auto it : vec) {
        cout << it << " ";
    }
}