#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define MAX 1001

int n;
int a[MAX], b[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    int ans = INT_MIN;
    for(int i = 0; i < n; i++) {
        bool cnt[MAX] = {};

        for(int j = 0; j < n; j++) {
            if(i == j) continue;

            for(int k = a[j]; k < b[j]; k++) {
                cnt[k] = true;
            }
        }

        int time = 0;
        for(int j = 0; j < MAX; j++) {
            if(cnt[j]) time++;
        }

        ans = max(ans, time);
    }

    cout << ans;

    return 0;
}