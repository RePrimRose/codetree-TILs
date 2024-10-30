#include <iostream>
using namespace std;

#define MAX 100

int n;
int x1[MAX], x2[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(x2[i] < x1[j] || x2[j] < x1[i]) continue;
            cnt++;
        }
    }

    if(cnt == n) cout << "Yes";
    else cout << "No";

    return 0;
}