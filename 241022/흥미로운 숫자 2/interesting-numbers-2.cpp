#include <iostream>
using namespace std;

int x, y;

bool isInteresting(int n) {
    int counting[10] = {};

    int digits = 0;
    while(n) {
        digits++;
        counting[n % 10]++;
        n /= 10;
    }

    for(int i = 0; i < 10; i++) {
        if(counting[i] == digits - 1) return true;
    }

    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> x >> y;

    int ans = 0;
    for(int i = x; i <= y; i++) {
        if(isInteresting(i)) {
            ans++;
        }
    }

    cout << ans;

    return 0;
}