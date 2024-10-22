#include <iostream>
#include <algorithm>
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

    int ans = 0;
    for(int i = 1; i <= MAX; i++) {
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                if(arr[k] - i == i - arr[j]) cnt++;
            }
        }
        ans = max(ans, cnt);
    }

    cout << ans;

    return 0;
}