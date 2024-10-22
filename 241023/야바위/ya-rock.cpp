#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 100

int n;
int a[MAX], b[MAX], c[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    int ans = 0;
    for(int i = 1; i < 4; i++) {
        int cnt = 0;
        int cup[4] = {};
        cup[i] = 1;
        for(int j = 0; j < n; j++) {
            int temp = cup[a[j]];
            cup[a[j]] = cup[b[j]];
            cup[b[j]] = temp;
            if(cup[c[j]]) cnt++;
        }
        ans = max(ans, cnt);
    }

    cout << ans;

    return 0;
}