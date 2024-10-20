#include <iostream>
#include <algorithm>
#include <climits>
#include <cstdlib>
using namespace std;

#define MAX 100

int n;
int x[MAX], y[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    int ans = INT_MIN;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                if(x[i] != x[j] && x[j] != x[k] && x[i] != x[k]) continue;
                if(y[i] != y[j] && y[j] != y[k] && y[i] != y[k]) continue;
                int area = abs((x[i] * y[j] + x[j] * y[k] + x[k] * y[i]) - (x[j] * y[i] + x[k] * y[j] + x[i] * y[k]));
                ans = max(ans, area);
            }
        }
    }

    cout << ans;

    return 0;
}