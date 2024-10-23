#include <iostream>
#include <algorithm>
#include <climits>
#include <cstdlib>
using namespace std;

#define MAX 100

int n;
int arr[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = INT_MAX;
    for(int i = 0; i < n; i++) {
        arr[i] *= 2;

        for(int j = 0; j < n; j++) {
            int remaining_arr[MAX] = {};
            int cnt = 0;
            
            for(int k = 0; k < n; k++) {
                if(k != j) remaining_arr[cnt++] = arr[k];
            }

            int sum_diff = 0;
            for(int k = 0; k < n - 2; k++) {
                sum_diff += abs(remaining_arr[k] - remaining_arr[k + 1]);
            }

            ans = min(ans, sum_diff);
        }

        arr[i] /= 2;
    }

    cout << ans;

    return 0;
}