#include <iostream>
using namespace std;

int a[1000001];
int b[1000001];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, t;
    char d;

    cin >> n >> m;

    int posA = 0;
    int elapsedTime = 1;
    for(int i = 0; i < n; i++) {
        cin >> d >> t;
        
        for(int j = 0; j < t; j++) {
            if(d == 'R') {
                posA += 1;
                a[elapsedTime] = posA;
            } else {
                posA -= 1;
                a[elapsedTime] = posA;
            }
            elapsedTime += 1;
        }
    }

    int posB = 0;
    elapsedTime = 1;
    for(int i = 0; i < m; i++) {
        cin >> d >> t;
        
        for(int j = 0; j < t; j++) {
            if(d == 'R') {
                posB += 1;
                b[elapsedTime] = posB;
            } else {
                posB -= 1;
                b[elapsedTime] = posB;
            }
            elapsedTime += 1;
        }
    }

    bool isMeet = false;
    for(int i = 1; i <= elapsedTime; i++) {
        if(a[i] == b[i]) {
            cout << i;
            isMeet = true;
            break;
        }
    }

    if(isMeet == false) cout << -1;

    return 0;
}