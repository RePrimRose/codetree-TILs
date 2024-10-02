#include <iostream>
using namespace std;

int a[1000001];
int b[1000001];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    int timeA = 1;
    for(int i = 0; i < n; i++) {
        int v, t;
        cin >> v >> t;

        while(t--) {
            a[timeA] = a[timeA - 1] + v;
            timeA++;
        }
    }

    int timeB = 1;
    for(int i = 0; i < m; i++) {
        int v, t;
        cin >> v >> t;

        while(t--) {
            b[timeB] = b[timeB - 1] + v;
            timeB++;
        }
    }

    char head;
    int cnt = 0;

    if(a[1] > b[1]) {
        head = 'A';
    } else if(a[1] < b[1]) {
        head = 'B';
    } else head = 'S';

    for(int i = 2; i <= 1000000; i++) {
        if(a[i] == 0) break;

        if(head == 'A') {
            if(a[i] < b[i]) {
                head = 'B';
                cnt++;
            } else if (a[i] == b[i]) head = 'S';
        } else if(head == 'B') {
            if(a[i] > b[i]) {
                head = 'A';
                cnt++;
            } else if (a[i] == b[i]) head = 'S';
        } else {
            if(a[i] < b[i]) {
                head = 'B';
                cnt++;
            } else if (a[i] > b[i]) {
                head = 'A';
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}