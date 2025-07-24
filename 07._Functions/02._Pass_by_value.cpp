#include<bits/stdc++.h>
using namespace std;

// function pass by value
// Parameters are copied and then changed within the scope of the fncn
// It doesn't changes the value outside it.
void doSomething(string name) {
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
//         Yashvardhan