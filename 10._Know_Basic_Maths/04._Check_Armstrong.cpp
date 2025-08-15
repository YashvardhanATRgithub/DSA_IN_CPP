#include<bits/stdc++.h>
using namespace std;

int countDigit(int num) {
    int cnt = 0;
    while(num > 0) {
        num = num/10;
        cnt += 1;
    }
    return cnt;
}
void checkArmstrong(int n) {
    int sum = 0;
    int dup = n;
    while(n > 0) {
        int lastDigit = n%10;
        sum = sum + pow(lastDigit, countDigit(dup));
        n = n / 10;
    }
    if(dup == sum)
        cout << "Armstrong Number" << endl;
    else
        cout << "Not a Armstrong Number" << endl;
}

int main() {
    
    int t;
    int num;

    cin >> t;
    while(t--) {

        cin >> num;
        checkArmstrong(num);
    }
}

/*

input:
3 ==> number of test cases
371
1634
1234

output: 
Armstrong Number
Armstrong Number
Not a Armstrong Number

*/

