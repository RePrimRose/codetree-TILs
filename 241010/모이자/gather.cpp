#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

int arr[101];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int minVal = INT_MAX;

    for(int i = 1; i <= n; i++) {
        int sum = 0;
        for(int j = 1; j <= n; j++) {
            sum += arr[j] * (abs(i - j));
        }
        minVal = min(minVal, sum);
    }

    cout << minVal;

    return 0;
}