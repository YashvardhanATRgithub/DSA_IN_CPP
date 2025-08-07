// We are going to use test case format used in comp. coding.

#include<bits/stdc++.h>
using namespace std;

void printSquare(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main() {
    int t;
    cin>>t;

    for(int i = 0; i<t; i++) {
        int n;
        cin>>n;
        printSquare(n);
    }
}

/*

input:  2    ==> number of test cases
        3 4  ==> square pattern of 3 and 4

output: * * * 
        * * * 
        * * * 
        * * * * 
        * * * * 
        * * * * 
        * * * * 
        
*/