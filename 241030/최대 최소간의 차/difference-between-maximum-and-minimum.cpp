#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define MAX_ARR 100
#define MAX_SECTION 10000

int n, k;
int arr[MAX_ARR];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = INT_MAX;
    for(int i = 0; i <= MAX_SECTION - k; i++) {
        int sum = 0;
        for(int j = 0; j < n; j++) {
            if(arr[j] < i) sum += (i - arr[j]);
            if(arr[j] > i + k) sum += (arr[j] - (i + k));
        }
        ans = min(ans, sum);
    }

    cout << ans;

    return 0;
}