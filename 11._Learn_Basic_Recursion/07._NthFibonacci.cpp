#include<bits/stdc++.h>
using namespace std;

// Nth Fibonacci using iterative approach
int iterativeFib(int n) {
    if(n < 2)
        return n;
    int prev = 0;
    int curr = 1;
    for(int i = 2; i <= n; i++) {
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}

// Nth Fibonacci using recursive approach
int recursiveFib(int n) {
    if(n <= 1) return n;
    return recursiveFib(n-1) + recursiveFib(n-2);
}
int main() {

    int n;
    cin >> n;

    cout << iterativeFib(n) << endl; // Prints 13 for input 7
    cout << recursiveFib(n); // Prints 13 for input 7


}