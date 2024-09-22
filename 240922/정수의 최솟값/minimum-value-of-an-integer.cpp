#include <iostream>
using namespace std;

int min(int a, int b, int c) {
    if(a < b) {
        if(a < c) return a;
        else return c;
    } else {
        if(b < c) return b;
        else return b;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;

    cin >> a >> b >> c;

    cout << min(a, b, c);

    return 0;
}