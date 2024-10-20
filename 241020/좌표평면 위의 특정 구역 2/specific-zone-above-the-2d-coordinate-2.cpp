#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define MAX 100

int n;
int x[100], y[100];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    int ans = INT_MAX;
    for(int i = 0; i < n; i++) {
        int x1 = INT_MAX; int y1 = INT_MAX;
        int x2 = INT_MIN; int y2 = INT_MIN;

        for(int j = 0; j < n; j++) {
            if(i == j) continue;

            x1 = min(x1, x[j]); y1 = min(y1, y[j]);
            x2 = max(x2, x[j]); y2 = max(y2, y[j]);
        }

        ans = min(ans, (x2 - x1) * (y2 - y1));
    }

    cout << ans;

    return 0;
}