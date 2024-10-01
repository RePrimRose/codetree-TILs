#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, t;

    cin >> n >> t;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 0, maxCnt = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] <= t) {
            maxCnt = max(maxCnt, cnt);
            cnt = 0;
        } else cnt++;
    }
    maxCnt = max(maxCnt, cnt);

    cout << maxCnt;

    return 0;
}