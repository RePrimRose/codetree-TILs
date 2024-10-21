#include <iostream>
#include <algorithm>
using namespace std;

int x, y;

int sum_digits(int n) {
    int sum = 0;

    while(n) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> x >> y;

    int ans = 0;
    for(int i = x; i <= y; i++) {
        int sum =sum_digits(i);
        ans = max(ans, sum);
    }

    cout << ans;

    return 0;
}