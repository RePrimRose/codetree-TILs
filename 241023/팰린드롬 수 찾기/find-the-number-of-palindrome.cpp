#include <iostream>
using namespace std;

int x, y;

int getPalindrome(int n) {
    int num = 0;
    while(n) {
        num = num * 10 + n % 10;
        n /= 10;
    }

    return num;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> x >> y;

    int ans = 0;
    for(int i = x; i <= y; i++) {
        if(i == getPalindrome(i)) ans++;
    }

    cout << ans;

    return 0;
}