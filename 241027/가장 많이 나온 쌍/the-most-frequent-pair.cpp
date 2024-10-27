#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 100

int n, m;
int a[MAX], b[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
    }

    int ans = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = i + 1; j <= n; j++) {
            int cnt = 0;
            for(int k = 0; k < m; k++) {
                if((a[k] == i && b[k] == j) || (a[k] == j && b[k] == i)) cnt++;
            }
            ans = max(ans, cnt);
        }
    }

    cout << ans;

    return 0;
}