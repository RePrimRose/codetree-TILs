#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    int sum = 0;

    cin >> a >> b;

    string str = "";
    int cnt = 0;
    for(int i = 0; i < a.length(); i++) {
        char c = a[i];

        if(c >= '0' && c <= '9') cnt++;
        else {
            if(cnt > 0) {
                str += a.substr(i - cnt, cnt);
                cnt = 0;
            }
        }
    }

    str += a.substr(a.length() - cnt, cnt);
    sum += stoi(str);
    str = "";
    cnt = 0;
    for(int i = 0; i < b.length(); i++) {
        char c = b[i];

        if(c >= '0' && c <= '9') cnt++;
        else {
            if(cnt > 0) {
                str += b.substr(i - cnt, cnt);
                cnt = 0;
            }
        }
    }

    str += b.substr(b.length() - cnt, cnt);
    sum += stoi(str);
    cout << sum;

    return 0;
}