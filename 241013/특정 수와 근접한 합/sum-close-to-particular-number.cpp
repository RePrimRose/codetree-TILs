#include <iostream>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

#define N 100

int n, s;
int arr[N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> s;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = INT_MAX;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int sum = 0;
            for(int k = 0; k < n; k++) {
                if(k == i || k == j) continue;
                sum += arr[k];
            }
            ans = min(ans, abs(s - sum));
        }
    }

    cout << ans;

    return 0;
}