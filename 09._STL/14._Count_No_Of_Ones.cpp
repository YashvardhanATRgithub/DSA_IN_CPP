#include<bits/stdc++.h>
using namespace std;

int main() {
    int num1 = 7;

    // to count number of ones in binary of 7
    int cnt1 = __builtin_popcount(num1);
    cout << cnt1; // prints 3

    cout << endl;

    // to count no. of 1's in case of long long integer
    long long num2 = 428794635467;
    int cnt2 = __builtin_popcountll(num2);
    cout << cnt2; // prints 21

}