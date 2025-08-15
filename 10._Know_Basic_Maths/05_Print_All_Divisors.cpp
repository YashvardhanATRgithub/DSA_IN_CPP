#include<bits/stdc++.h>
using namespace std;


// t.c O(n)
void allDivisorsNaive(int n) {

    for(int i = 1; i <= n; i++) {
        if(n%i == 0) cout << i << " ";
    }

}

// t.c O(sqrt(n))
void allDivisorsOptimized(int n) {

    vector<int> lst;

    // this for loop tc = sqrt(n)
    for(int i = 1; i <= sqrt(n); i++) {
        if(n%i == 0) {
            lst.push_back(i);
            if(n/i != i)
                lst.push_back(n/i);
        }
            
    }
    // this sorting takes O( no. of factors * log(no. of factors) ) tc
    sort(lst.begin(), lst.end());

    // this loop takes O(n) tc
    for(auto it: lst) {
        cout << it << " ";
    }
}

int main() {

    int n;
    cin >> n; // input ==> 36

    allDivisorsNaive(n); // Prints 1 2 3 4 6 9 12 18 36 

    cout << endl;

    allDivisorsOptimized(n); // Prints 1 2 3 4 6 9 12 18 36
}