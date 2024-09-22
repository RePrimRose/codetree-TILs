#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;

    cin >> str;
    cout << str << endl;

    int len = str.length();
    for(int i = 0; i < len; i++) {
        str = str.substr(len - 1, 1) + str.substr(0, len - 1);
        cout << str << endl;
    }

    return 0;
}