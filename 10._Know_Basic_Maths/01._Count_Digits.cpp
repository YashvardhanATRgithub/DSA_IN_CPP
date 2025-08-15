#include<bits/stdc++.h>
using namespace std;

int countDigit(int n) {
    int count = 0;

    while(n > 0) {
        count += 1;
        n  = n/10;
    }

    return count;
}

int countDigitsByLog(int n) {
    int count = (int) ( log10(n) + 1);
    return count;
}

int main() {
    int n = 7759;
    cout << "# of digits =  "<< countDigit(n) << endl;
    cout << "# of digits using log = " << countDigitsByLog(n);
}

// time complexity = log10(n)