#include<bits/stdc++.h>
using namespace std;

// sum using parametrised way (Function returns nothing but builds a var sum which accumulate sum at each recursive call)
void paramterisedSum(int i, int n) {
    int sum = n;
    if(i<1){
        cout << sum << endl;
        return;
    } 
    paramterisedSum(i-1, sum+i);
}

// sum using functional way where function directly returns sum
int functionalSum(int n) {
    if(n == 0) return 0;
    return n + functionalSum(n-1);
}
int main() {
    int n;
    cin>>n;

    paramterisedSum(n,0); // Prints 6 for input 3
    cout << functionalSum(n) << endl; // Prints 6 for input 3
}