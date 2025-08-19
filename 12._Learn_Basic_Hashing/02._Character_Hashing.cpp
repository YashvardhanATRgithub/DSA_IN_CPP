#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    // precompute
    int hash[26] = {0};
    for(int i = 0; i < str.size(); i++) {
        hash[str[i]-'a'] += 1; 
    }

    int q;
    cin >> q;
    while(q--) {
        char character;
        cin >> character;
        //fetch
        cout << hash[character - 'a'] << endl;
    }

}

// If it is not specified that only lowercase/ uppercase or alphanumeric characters are there, then make size of the array 256 and you don't have to use any formula, characters are automatically casted to their respective ascii value in the array