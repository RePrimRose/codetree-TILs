#include <iostream>
using namespace std;

int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};

int getDir(char c) {
    if(c == 'N') return 0;
    if(c == 'S') return 1;
    if(c == 'E') return 2;
    if(c == 'W') return 3;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int x = 0, y = 0, t = 0;
    for(int i = 0; i < n; i++) {
        int dis;
        char dirC;
        cin >> dirC >> dis;

        int dir = getDir(dirC);
        while(dis--) {
            x = x + dx[dir]; y = y + dy[dir];
            t++;
            if(x == 0 && y == 0) {
                cout << t;
                return 0;
            }
        }
    }

    cout << -1;

    return 0;
}