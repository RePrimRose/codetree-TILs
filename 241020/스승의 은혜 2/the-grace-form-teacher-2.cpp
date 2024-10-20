#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 1000

int n, b;
int p[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> b;

    for(int i = 0; i < n; i++)
        cin >> p[i];
    
    sort(p, p + n);

    int ans = 0;
    for(int i = 0; i < n; i++) {
        int b_copy = b, cnt = 0;
        for(int j = 0; j < n; j++) {
            if(i == j) b_copy -= p[j] / 2;
            else b_copy -= p[j];
            if(b_copy < -1) break;
            cnt++;
        }
        ans = max(ans, cnt);
    }

    cout << ans;

    return 0;
}