#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define MAX 100

int n;
int x[MAX], y[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int ans = INT_MAX;
    for(int i = 0; i <= MAX; i += 2) {
        for(int j = 0; j <= MAX; j += 2) {
            int northeast = 0, northwest = 0;
            int southeast = 0, southwest = 0;
            for(int k = 0; k < n; k++) {
                if(x[k] > i && y[k] > j) northeast++;
                if(x[k] < i && y[k] > j) northwest++;
                if(x[k] > i && y[k] < j) southeast++;
                if(x[k] < i && y[k] < j) southwest++;
            }
            int cnt = max(northeast, max(northwest, max(southeast, southwest)));
            ans = min(ans, cnt);
        }
    }

    cout << ans;

    return 0;
}