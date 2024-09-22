#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;

    cin >> str;

    char c = str[1];
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == c) str[i] = str[0];
    }

    cout << str;

    return 0;
}