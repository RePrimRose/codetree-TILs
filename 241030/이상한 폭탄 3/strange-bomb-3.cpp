#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 100

int n, k;
int bomb[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;

    for(int i = 0; i < n; i++)
        cin >> bomb[i];

    int ans = 0;
    int max_cnt = 0;
    for(int i = 0; i < n; i++) {
        int cnt = 0;

        for(int j = i + 1; j <= i + k; j++) {
            if(j == n) break;
            if(bomb[i] == bomb[j]) cnt++;
        }

        if(cnt >= max_cnt && cnt != 0) {
            max_cnt = cnt;
            ans = max(ans, bomb[i]);
        }
    }

    cout << ans;

    return 0;
}