#include<bits/stdc++.h>
using namespace std;

// Nth Fibonacci using iterative approach
void iterativeFib(int n) {
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    int i;
    for(i = 2; i <= n; i ++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    cout << fib[n] << endl;
}

// Nth Fibonacci using recursive approach
int recursiveFib(int n) {
    if(n <= 1) return n;
    return recursiveFib(n-1) + recursiveFib(n-2);
}
int main() {

    int n;
    cin >> n;

    iterativeFib(n); // Prints 13 for input 7
    cout << recursiveFib(n); // Prints 13 for input 7


}