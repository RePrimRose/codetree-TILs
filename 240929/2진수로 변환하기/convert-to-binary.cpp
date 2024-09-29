#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int digits[20] = {};
    int cnt = 0;

    cin >> n;

    while(true) {
        if(n < 2) {
            digits[cnt++] = n;
            break;
        }

        digits[cnt++] = n % 2;
        n /= 2;
    }

    for(int i = cnt - 1; i >= 0; i--) {
        cout << digits[i];
    }

    return 0;
}