#include<bits/stdc++.h>
using namespace std;

int reverseNum(int n) {
    
    int reverse  = 0;

    while(n > 0) {
        int lastDigit = n % 10;
        reverse = (reverse*10) + lastDigit;
        n = n/10;
    }

    return reverse;
}

int main() {
    int n = 5896;

    cout << "Reverse = " << reverseNum(n); // Prints Reverse = 6985
}