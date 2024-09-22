#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;

    cin >> str;

    for(int i = str.length() - 1; i >= 0; i -= 2) {
        cout << str[i];
    }

    return 0;
}