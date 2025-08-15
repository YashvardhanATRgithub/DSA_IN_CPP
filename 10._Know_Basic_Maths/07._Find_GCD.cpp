#include<bits/stdc++.h>
using namespace std;

// tc: O(min(n1,n2))
void findGcdNaive(int n1, int n2) {

    int gcd = 1;
    for(int i = 1; i <= min(n1,n2); i++) {
        if(n1%i == 0 && n2%i==0) {
            gcd = i;
        }
    }
    cout << gcd << endl;
}

// tc: O(max(n1,n2)) subtractions in case of two consecutive fibonacci nos.
void findGcdByEuclidianNaive(int n1, int n2) {
    while(n1 > 0 && n2 > 0) {
        if(n1 > n2) n1 = n1-n2;
        else n2 = n2-n1;
    }
    if(n1==0) cout << n2;
    else cout << n1;

    cout<<endl;
}

// tc: O(log(min(n1,n2))base theta)
void findGcdByEuclidianOptimised(int n1, int n2) {
    int gcd = 1;

    while(n1 > 0 && n2 > 0) {
        if(n1>n2) n1 = n1%n2;
        else n2 = n2%n1;
    }
    if(n1==0) cout << n2;
    else cout << n1;

    cout << endl;
}
int main() {

    int t;
    cin >> t;

    while(t--) {
        int n1,n2;
        cin>>n1>>n2;
        //findGcdNaive(n1,n2);
        //findGcdByEuclidianNaive(n1,n2);
        findGcdByEuclidianOptimised(n1,n2);

    }

}


/*

input:
4 ==> test cases
5 8
10 15
10 20
10 52

output:
1
5
10
2

*/