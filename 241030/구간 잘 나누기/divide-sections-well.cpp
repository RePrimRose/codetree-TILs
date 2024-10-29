#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define MAX_ARR 100
#define MAX_SUM 5000

int n, m;
int arr[MAX_ARR];

bool isPossible(int max_prefix_sum) {
    int section_cnt = 1;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > max_prefix_sum) return false;

        sum += arr[i];

        if(sum > max_prefix_sum) {
            section_cnt++;
            sum = arr[i];
        }

        if(section_cnt > m) return false;
    }

    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = INT_MAX;
    for(int i = 1; i <= MAX_SUM; i++) {
        if(isPossible(i)) ans = min(ans, i);
    }

    cout << ans;

    return 0;
}