#include<bits/stdc++.h>
#include<list>
using namespace std;

void explainList() {

    list<int> ls;
    ls.push_back(4);
    ls.emplace_back(2);

    ls.push_front(5);
    ls.emplace_front(8);

    for(auto it : ls) {
        cout<< it << " ";  // ==> {8 5 4 2}
    }
}

// rest functions same as vectors
// begin, end, rbegin, rend, clear, insert, size, swap

int main() {
    explainList();
}

