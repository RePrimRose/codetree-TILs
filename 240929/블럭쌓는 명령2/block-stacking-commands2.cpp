#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[101] = {};
    int n, k;

    cin >> n >> k;

    for(int i = 0; i < k; i++) {
        int a, b;

        cin >> a >> b;

        for(int j = a; j <= b; j++) {
            arr[j]++;
        }
    }

    int maxNum = 0;
    for(int i = 1; i <= n; i++) {
        maxNum = max(maxNum, arr[i]);
    }

    cout << maxNum;

    return 0;
}