#include<bits/stdc++.h>
using namespace std;

// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times
// void -> which does not returns anything
// return
// parameterised
// non parameterised

// void function

void printName() {
    cout<<"Yashvardhan"<<endl;
}

// void and parameterised function
void printnameParam(string name) {
    cout<<"Hey "<<name<<endl;
}

// parametrised and return function
int sum(int num1, int num2) {
    int num3 = num1 + num2;
    return num3;
}

// function to print max value among two numbers
int maxx(int num1, int num2) {
    if(num1 >= num2)
        return num1;
    else
        return num2;
}
/*Remember that if the 'if' statement is not executed and you have 
  not written 'else' statement then garbage value will be returned 
  for num2. So, always make sure to have a return for return fncn.*/



int main() {

    // calling void function
    printName();

    // calling void and parameterised function
    string name = "Yashvardhan";
    printnameParam(name);

    // calling parameterised and return function
    int num1 = 5;
    int num2 = 6;
    cout<<"Sum is: "<<sum(num1,num2)<<endl;

    //calling maxx function
    cout<<"The maximum element is: "<<maxx(num1, num2);

}