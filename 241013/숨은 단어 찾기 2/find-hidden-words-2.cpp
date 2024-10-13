#include <iostream>
#include <string>
using namespace std;

#define MAX_N 50

int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1}, dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int n, m;
string str[MAX_N];

bool InRange(int x, int y) {
    return 0 <= x && x < m && 0 <= y && y < n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(str[i][j] == 'L') {
                for(int k = 0; k < 8; k++) {
                    int cnt = 0, x = j, y = i;
                    while(true) {
                        int nx = x + dx[k], ny = y + dy[k];
                        if(!InRange(nx, ny)) break;
                        if(str[ny][nx] == 'E') cnt++;
                        else break;
                        x = nx; y = ny;
                    }
                    if(cnt == 2) ans++;
                }
            }
        }
    }

    cout << ans;

    return 0;
}