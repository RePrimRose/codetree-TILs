#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;

    cin >> str;

    str.erase(str.find('e'), 1);

    cout << str;

    return 0;
}