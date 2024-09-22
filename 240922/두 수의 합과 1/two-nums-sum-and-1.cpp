#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;

    cin >> a >> b;

    string str = to_string(a + b);

    int cnt = 0;
    for(int i = 0; i < str.length(); i++) {
        char c = str[i];

        if(c == '1') cnt++;
    }

    cout << cnt;

    return 0;
}