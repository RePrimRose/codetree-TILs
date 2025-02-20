#include <iostream>

using namespace std;

int n;
int dp[1001];

int stair(int n) {
    if(n == 1 || n < 0) return 0;
    if(dp[n]) return dp[n];

    dp[n] = (stair(n - 2) + stair(n - 3)) % 10007;

    return dp[n];
}

int main() {
    cin >> n;

    // Write your code here!
    dp[0] = 1;

    int answer = stair(n);

    cout << answer;

    return 0;
}
