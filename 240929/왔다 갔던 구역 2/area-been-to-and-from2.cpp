#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[2001] = {};
    int n;

    cin >> n;

    int pos = 1000;
    for(int i = 0; i < n; i++) {
        int x;
        char d;

        cin >> x >> d;

        if(d == 'R') {
            for(int j = pos; j < pos + x; j++) {
                arr[j]++;
            }
            pos += x;
        } else {
            for(int j = pos; j > pos - x; j--) {
                arr[j]++;
            }
            pos -= x;
        }
    }

    int cnt = 0;
    for(int i = 1; i < 2001; i++) {
        if(arr[i] > 1) cnt++;
    }

    cout << cnt;

    return 0;
}