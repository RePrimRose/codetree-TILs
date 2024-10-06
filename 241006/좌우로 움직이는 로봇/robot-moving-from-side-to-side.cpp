#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_RANGE 1000001

int a[MAX_RANGE];
int b[MAX_RANGE];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    int timeA = 1;
    for(int i = 0; i < n; i++) {
        int t;
        char d;
        cin >> t >> d;

        while(t--) {
            if(d == 'R') {
                a[timeA] = a[timeA - 1] + 1;
            } else {
                a[timeA] = a[timeA - 1] - 1;
            }
            timeA++;
        }
    }

    int timeB = 1;
    for(int i = 0; i < m; i++) {
        int t;
        char d;
        cin >> t >> d;

        while(t--) {
            if(d == 'R') {
                b[timeB] = b[timeB - 1] + 1;
            } else {
                b[timeB] = b[timeB - 1] - 1;
            }
            timeB++;
        }
    }

    int finalPos = max(timeA, timeB);

    int ans = 0;
    for(int i = 1; i <= finalPos; i++) {
        if(a[i] == b[i] && a[i - 1] != b[i - 1]) ans++;
    }

    cout << ans;

    return 0;
}