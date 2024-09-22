#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    int sum = 0;

    cin >> a >> b;

    int cnt = 1;
    for(int i = 1; i < a.length(); i++) {
        char c = a[i];

        if(c >= '0' && c <= '9') cnt++;
        else break;
    }

    sum += stoi(a.substr(0, cnt));

    cnt = 1;
    for(int i = 1; i < b.length(); i++) {
        char c = b[i];

        if(c >= '0' && c <= '9') cnt++;
        else break;
    }

    sum += stoi(b.substr(0, cnt));

    cout << sum;

    return 0;
}