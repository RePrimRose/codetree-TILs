#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 0, maxCnt = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] != arr[i - 1]) {
            maxCnt = max(maxCnt, cnt);
            cnt = 0;
        }
        cnt++;
    }
    maxCnt = max(maxCnt, cnt);

    cout << maxCnt;

    return 0;
}