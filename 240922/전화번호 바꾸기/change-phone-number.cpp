#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;

    cin >> str;

    str = "010-" + str.substr(9, 4) + "-" + str.substr(4, 4);

    cout << str;

    return 0;
}