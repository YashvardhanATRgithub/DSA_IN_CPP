#include<bits/stdc++.h>
using namespace std;

// function pass by Reference
// Parameters address are passed and changes the value at that address
// It changes the value outside it.
void doSomething(string &name) {
    name[0] = 'R';
    cout<<name<<endl;
}

int main() {
    string name;
    cin>>name;
    doSomething(name);
    cout << name;
}

// Output: Rashvardhan
//         Rashvardhan