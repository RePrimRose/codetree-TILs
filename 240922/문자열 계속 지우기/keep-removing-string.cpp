#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1, str2;

    cin >> str1 >> str2;

    while(str1.find(str2) != string::npos) {
        str1.erase(str1.find(str2), str2.length());
    }

    cout << str1;

    return 0;
}