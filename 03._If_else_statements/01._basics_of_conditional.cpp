// write a program to print "adult" if age >= 18 
// and not an adult otherwise

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cin>>age;

    if(age >= 18)
        cout<<"adult";
    else
        cout<<"Not and adult";
}