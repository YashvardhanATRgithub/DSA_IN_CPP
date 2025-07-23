#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "yashvardhan";
    
    int len = str.size();
    cout<<len<<endl;

    // inorder to access last element, len-1 bcz index starts at 0
    char lastEle = str[len-1];
    cout<<lastEle<<endl;

    //inorder to change a particular char in the str
    str[2] = 'x';

    // str[2] = "z" ====> this is wrong. You can't replace
                          // a char with a string.

}