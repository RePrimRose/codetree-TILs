#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define MAX 101

int n, k;
int rock[MAX];

bool IsPossible(int max_val) {
    int available_rocks[MAX] = {};
    int cnt = 0;

    for(int i = 1; i <= n; i++) {
        if(rock[i] <= max_val) {
            available_rocks[cnt++] = i;
        }
    }

    if(available_rocks[0] != 1) return false;

    for(int i = 1; i < cnt; i++) {
        int dist = available_rocks[i] - available_rocks[i - 1];
        if(dist > k) return false;
    }

    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        cin >> rock[i];
    }

    int ans = INT_MAX;
    for(int i = 1; i <= MAX; i++) {
        if(IsPossible(i)) {
            ans = min(ans, i);
        }
    }

    cout << ans;

    return 0;
}