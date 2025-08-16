#include<bits/stdc++.h>
using namespace std;

// function to print name 1 to N (tc & sc: O(n))
void printName(int i, int n) {
    if(i > n) return;
    cout << "Yash" << endl;
    printName(i+1, n);
}

// Print linearly from 1 to N
void printLinearly(int i, int n) {
    if(i > n) return;
    cout << i << " ";
    printLinearly(i+1, n);
}

// Prints linearly from N to 1
void printLinearlyReverse(int i,int n) {
    if(i < 1) return;
    cout << i << " ";
    printLinearlyReverse(i-1, n);
}

// Prints from 1 to N linealrly by back tracking
void printByBckTrck(int i, int n) {
    if(i < 1) return;
    printByBckTrck(i-1,n);
    cout << i << " ";
}

// Prints from N to 1 linearly by back tracking
void printByBckTrckRvrse(int i, int n) {
    if(i > n) return;
    printByBckTrckRvrse(i+1, n);
    cout << i << " ";
}
int main() {

    int n;
    cin >> n;

    //printName(1, n); // ==> Prints Yash 4 times

   //printLinearly(1, n); // ==> Prints 1 2 3 4

   //printLinearlyReverse(n, n); // ==> Prints 4 3 2 1 

   // printByBckTrck(1, n); // ==> Prints 1 2 3 4

   printByBckTrckRvrse(1, n); // ==> Prints 4 3 2 1

}