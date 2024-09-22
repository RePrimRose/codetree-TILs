#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1, str2;

    cin >> str1 >> str2;

    if(str1.find(str2) != string::npos) {
        cout << str1.find(str2);
    } else cout << "No";

    return 0;
}