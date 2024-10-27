#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define MAX 1000

int n, k;
int arr[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int ans = 0;
    for (int start = 0; start < n; start++) {
        for (int i = 1; i <= n - start; i++) {
            int max_num = INT_MIN;
            int min_num = INT_MAX;

            for (int j = start; j < start + i; j++) {
                max_num = max(max_num, arr[j]);
                min_num = min(min_num, arr[j]);
            }

            if (max_num - min_num > k) break;
            ans = max(ans, i);
        }
    }

    cout << ans;

    return 0;
}