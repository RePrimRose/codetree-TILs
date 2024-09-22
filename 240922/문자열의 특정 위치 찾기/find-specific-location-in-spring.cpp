#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    char c;

    cin >> str >> c;

    if(str.find(c) != string::npos) {
        cout << str.find(c);
    }

    return 0;
}