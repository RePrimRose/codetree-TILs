#include <iostream>
using namespace std;

int n;
int dx[4] = {-1, 0, 0, 1}, dy[4] = {0, -1, 1, 0};

int getDir(char c) {
    if(c == 'U') return 2;
    if(c == 'D') return 1;
    if(c == 'L') return 0;
    if(c == 'R') return 3;
}

bool InRange(int x, int y) {
    return 0 < x && x < n && 0 < y && y < n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int t, x, y;
    char d;
    cin >> n >> t;
    cin >> y >> x >> d;

    int dir = getDir(d);
    while(t--) {
        int nx = x + dx[dir], ny = y + dy[dir];
        if(InRange(nx, ny)) {
            x = x + dx[dir];
            y = y + dy[dir];
        } else {
            dir = 3 - dir;
        }
    }

    cout << y << " " << x;

    return 0;
}