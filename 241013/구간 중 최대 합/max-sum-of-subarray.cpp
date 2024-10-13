#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

#define N 100

int n, k;
int arr[N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxSum = INT_MIN;
    for(int i = 0; i <= n - k; i++) {
        int sum = 0;
        for(int j = i; j < i + k; j++) {
            sum += arr[j];
        }
        maxSum = max(maxSum, sum);
    }

    cout << maxSum;

    return 0;
}