#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int n;

    cin >> str >> n;

    for(int i = str.length() - 1; n > 0 && i >= 0; i--, n--) {
        cout << str[i];
    }

    return 0;
}