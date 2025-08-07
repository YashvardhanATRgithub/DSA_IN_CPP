#include<bits/stdc++.h>
using namespace std;

void explainSet() {

    // set stores elements in sorted and unique way
    set<int> st;
    st.insert(1);   // {1}
    st.insert(2);   // {1, 2}
    st.insert(2);   // {1, 2} duplicates not allowed
    st.insert(4);   // {1, 2, 4}
    st.insert(3);   // {1, 2, 3, 4}

    /*
    Functionality of insert in vector can be used also,
    that only increases efficiency

    begin(), end(), rbegin(), rend(), size(), empty() and
    swap() are same as of those used for vectors.
    */

    // new list ==> {1, 2, 3, 4, 5}
    auto it = st.find(3); // this will return an iterator which poins to 3 of the set
    
    // {1, 2, 3, 4, 5}
    auto it = st.find(6); // since, 6 is not in the set. So, it will return an iteratir st.end() which will point to the address just after 5
    
    // {1, 2, 3, 4, 5}
    st.erase(5); // erases 5 | takes logarithmic time


    // {1, 4, 5}
    int cnt = st.count(1); // returns 1 bcz 1 is present in the set. Otherwise 0 if not present in the set

    auto it = st.find(3);
    st.erase(it);   // takes constant time bcz it knows the address of element to be deleted with the help of iterator 'it'

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase {1, 4, 5}

    // lower_bound() and upper_bound() functions works in the same way as in the vectors
    
    // {1, 2, 3, 4, 5}

    //returns an iterator to the first element that is not less than the given key
    auto it = st.lower_bound(2);    // The first element >= 2 is 2 itself.

    // returns an iterator to the first element that is greater than the given key
    auto it = st.upper_bound(3);    // The first element > 3 is 4
}

int main() {
    explainSet();
}