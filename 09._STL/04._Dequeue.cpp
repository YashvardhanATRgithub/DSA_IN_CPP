#include <iostream>
#include <deque>
using namespace std;

void explainDeque() {
    deque<int> dq;
    dq.push_back(1);         // dq = {1}
    dq.emplace_back(2);      // dq = {1, 2}
    dq.push_front(4);        // dq = {4, 1, 2}
    dq.emplace_front(3);     // dq = {3, 4, 1, 2}

    dq.pop_back();           // dq = {3, 4, 1}
    dq.pop_front();          // dq = {4, 1}

    cout << "Back: " << dq.back() << endl;   // Output: 1
    cout << "Front: " << dq.front() << endl; // Output: 4

    // Other functions (same as vector):
    // begin(), end(), rbegin(), rend(), clear(), insert(), size(), swap()
}

int main() {
    explainDeque();
    return 0;
}
