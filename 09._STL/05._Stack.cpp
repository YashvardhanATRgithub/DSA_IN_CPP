#include<bits/stdc++.h>
using namespace std;

void explainStack() {

    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(3); // {3, 3, 2, 1}
    st.emplace(5); // {5, 3, 3, 2, 1}

    // give top element in stack
    cout<< st.top() << endl;  // ==> 5

    // delete top element
    st.pop();  // ==> {3, 3, 2, 1}

    //size of stack
    cout << st.size() << endl;

    // check whether stack is empty
    cout << st.empty() << endl;

    // swap between two stacks
    stack<int> st1, st2;
    st1.swap(st2);


}   

int main() {
    explainStack();
}