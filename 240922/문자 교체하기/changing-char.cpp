#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1, str2;

    cin >> str1 >> str2;

    str2[0] = str1[0];
    str2[1] = str1[1];

    cout << str2;

    return 0;
}