#include <iostream>
#include <string>
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

    string head = "";
    int ans = 0;
    for(int i = 1; i < timeA; i++) {
        string nowHead;
        
        if(a[i] > b[i]) nowHead = "A";
        else if(a[i] < b[i]) nowHead = "B";
        else nowHead = "AB";

        if(head != nowHead) {
            ans++;
            head = nowHead;
        }
    }

    cout << ans;

    return 0;
}