#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

#define MAX 401

int n, k;
int arr[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        int cnt, loc;
        cin >> cnt >> loc;
        arr[loc + 100] += cnt;
    }

    int ans = INT_MIN;
    for(int i = k; i < MAX - k; i++) {
        int sum = 0;
        for(int j = i - k; j <= i + k; j++) {
            sum += arr[j];
        }
        ans = max(ans, sum);
    }

    cout << ans;
    
    return 0;
}