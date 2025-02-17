#include <iostream>

using namespace std;

int dp[1001];
int n;

int main() {
    cin >> n;

    // Write your code here!
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= 4; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    for (int i = 5; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 5];
    }

    cout << dp[n] % 10007;

    return 0;
}
