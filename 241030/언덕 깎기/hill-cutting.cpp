#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define MAX 1000

int n;
int arr[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = INT_MAX;
    for(int i = 0; i < 84; i++) {
        int sum = 0;
        for(int j = 0; j < n; j++) {
            if(arr[j] < i) sum += (i - arr[j]) * (i - arr[j]);
            if(arr[j] > i) sum += (arr[j] - (i + 17)) * (arr[j] - (i + 17));
        }
        ans = min(ans, sum);
    }

    cout << ans;

    return 0;
}