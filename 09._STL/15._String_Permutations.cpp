#include<bits/stdc++.h>
using namespace std;

// Prints total number of permutations
void nextPermutation(string s) {
    do {
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));
}


int main() {
    
    string s = "123";
    nextPermutation(s); // ==> prints all permutations i.e. 3! = 6

    cout << endl;
    
    // what if string elements are not sorted ? ==> apply sort()
    string s1 = "321";  
    nextPermutation(s1); // ==> passing this will print 321 only

    cout << endl;

    // let's sort s1
    sort(s1.begin(), s1.end());
    nextPermutation(s1); // ==> prints all permutations i.e. 3! = 6
    

}