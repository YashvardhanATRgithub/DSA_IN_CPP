#include<bits/stdc++.h>
using namespace std;

void explainQueue() {

    queue<int> q;
    q.push(1);  // ==> {1}
    q.push(2);  // ==> {1, 2}
    q.emplace(4);   // ==> {1, 2, 4}

    // adding 5 to last element i.e. back
    q.back() += 5;
    cout<< q.back() << endl;    // ==> {1, 2, 9} so prints 9

    // print first element
    cout<< q.front() << endl;   // ==> prints 1

    // other functions same as stack


}

int main() {

    explainQueue();
}