#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int sum = 0;

    cin >> str;

    for(int i = 0; i < str.length(); i++) {
        char c = str[i];

        if(c >= '0' && c <= '9') sum += c - '0';
    }

    cout << sum;

    return 0;
}