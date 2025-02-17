#include <iostream>

using namespace std;

long long dp[1001];
int n;

int main() {
    cin >> n;

    // Write your code here!
    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        if (i - 1 >= 0)
            dp[i] = (dp[i] + dp[i - 1]) % 10007;
        if (i - 2 >= 0)
            dp[i] = (dp[i] + dp[i - 2]) % 10007;
        if (i - 5 >= 0)
            dp[i] = (dp[i] + dp[i - 5]) % 10007;
    }

    cout << dp[n];

    return 0;
}
