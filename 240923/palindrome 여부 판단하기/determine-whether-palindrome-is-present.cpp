#include <iostream>
using namespace std;

bool isPalindrome(string &str) {
    string tmp = "";
    
    for(int i = str.length() - 1; i >= 0; i--) {
        tmp += str[i];
    }

    return tmp == str;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string str;

    cin >> str;

    if(isPalindrome(str)) cout << "Yes";
    else cout << "No";
    return 0;
}