#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 100

int n, m;
int A[MAX], aSub[MAX];
int B[MAX], bSub[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;

    for(int i = 0; i < n; i++)
        cin >> A[i];
    
    for(int i = 0; i < m; i++)
        cin >> B[i];

    sort(B, B + m);

    int ans = 0;
    for(int i = 0; i <= n - m; i++) {
        for(int j = i; j < i + m; j++) {
            aSub[j - i] = A[j];
        }
        sort(aSub, aSub + m);
        int cnt = 0;
        for(int j = 0; j < m; j++) {
            if(B[j] == aSub[j]) cnt++;
        }
        if(cnt == m) ans++;
    }

    cout << ans;

    return 0;
}