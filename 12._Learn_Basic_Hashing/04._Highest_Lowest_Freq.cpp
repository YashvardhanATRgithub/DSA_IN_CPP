#include<bits/stdc++.h>
using namespace std;


void minMaxFrequency(int arr[], int n) {
    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    int maxFreq = 0;
    int maxEle;

    int minFreq = n;
    int minEle;

    for(auto it : mpp) {
        if(it.second > maxFreq) {
            maxFreq = it.second;
            maxEle = it.first;
        }
        if(it.second < minFreq) {
            minFreq = it.second;
            minEle = it.first;
        }
    }

    cout << "Maximum frequency is: "<< maxFreq << " and element is: " << maxEle << endl;
    cout << "Minimum frequency is: "<< minFreq << " and element is: " << minEle << endl;
}
int main() {

    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    minMaxFrequency(arr, n);
}