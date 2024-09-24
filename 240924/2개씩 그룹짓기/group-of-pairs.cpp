#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[2000];

    cin >> n;

    for(int i = 0; i < 2 * n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + 2 * n);

    int maxNum = 0;
    for(int i = 0; i < n; i++) {
        maxNum = max(maxNum, arr[i] + arr[2 * n - i - 1]);
    }

    cout << maxNum;

    return 0;
}