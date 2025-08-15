#include<bits/stdc++.h>
using namespace std;


void isPrimeNaive(int n) {
    int count = 0;

    for(int i = 1; i<=n; i++) {
        if(n%i == 0) {
            count++;
        }
    }
    if(count == 2) cout << "Prime";
    else cout << "Not a Prime";

    cout << endl;
}
void isPrimeOptimised(int n) {
    int count = 0;
    for(int i = 1; i*i <= n; i++) {
        if(n%i == 0) {
            count++;
            if(n/i != i)
                count++;
        }
    }
    if(count == 2) cout << "Prime";
    else cout << "Not a prime";

    cout << endl;

}

int main() {

    int n;

    int t;
    cin>>t;

    while(t--) {
        cin>>n;
        //isPrimeNaive(n);
        isPrimeOptimised(n);
    }

}

/*

Input:
4 ==> total test cases
1
4
7
12

Output:
Not a prime
Not a prime
Prime
Not a prime

*/