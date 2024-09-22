#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;

    cin >> str;

    char c1 = str[0];
    char c2 = str[1];

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == c1) {
            str[i] = c2;
            continue;
        }

        if(str[i] == c2) {
            str[i] = c1;
            continue;
        }
    }

    cout << str;

    return 0;
}