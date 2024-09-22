#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;

    cin >> str;

    for(int i = 0; i < str.length(); i++) {
        char c = str[i];

        if(isalpha(c)) cout << (char)tolower(c);
        else if(c >= '0' && c <= '9') cout << (char)c;
    }

    return 0;
}