#include<bits/stdc++.h>
using namespace std;

int reverseNum(int num) {
    int reverse = 0;
    while(num > 0) {
        int lastNum = num%10;
        reverse = (reverse * 10) + lastNum;
        num = num / 10;
    }
    return reverse;
}
void isPalindrome(int num) {
    int reverse = reverseNum(num);
    if(num == reverse)
        cout << "Palindrome" << endl;
    else
        cout << "Not a Palindrome" << endl;
}

int main() {

    int num;
    int t;
    cin >> t;

    while(t--) {
        cin >> num;
        isPalindrome(num);
    }
}

/*


input:
4
1221
1331
1234
3241

Output:
Palindrome
Palindrome
Not a Palindrome
Not a Palindrome

*/