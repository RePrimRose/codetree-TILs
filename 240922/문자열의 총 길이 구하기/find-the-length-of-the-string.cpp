#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int cnt = 0;

    for(int i = 0; i < 10; i++) {
        cin >> str;
        cnt += str.length();
    }

    cout << cnt;

    return 0;
}