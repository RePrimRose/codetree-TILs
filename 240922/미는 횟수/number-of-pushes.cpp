#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;

    cin >> a >> b;

    int cnt = 0;
    for(int i = 0; i < a.length(); i++) {
        a = a.substr(a.length() - 1, 1) + a.substr(0, a.length() - 1);
        cnt++;
        if(a == b) break;
    }

    if(cnt == a.length()) cout << -1;
    else cout << cnt;

    return 0;
}