#include<bits/stdc++.h>
using namespace std;

// Recursive function without any base condition
void noBaseRecursion(int n) {
    cout << n;
    noBaseRecursion(n);
}

// Recursive function with base condition
void hasBaseRecursion(int n) {
    if(n == 4) return; // ==> base condition
    n++;
    cout << n << endl;
    hasBaseRecursion(n);
}
int main()
{   int n = 1;
    noBaseRecursion(n); // ==> Segmentation fault
    
    hasBaseRecursion(n); // ==> Prints 2 3 4
}