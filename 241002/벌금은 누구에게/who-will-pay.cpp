#include <iostream>
using namespace std;

int arr[101];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, k;

    cin >> n >> m >> k;

    int ans = -1;
    for(int i = 0; i < m; i++) {
        int num;

        cin >> num;

        arr[num]++;

        if(arr[num] == k) {
            ans = num;
            break;
        }
    }

    cout << ans;

    return 0;
}