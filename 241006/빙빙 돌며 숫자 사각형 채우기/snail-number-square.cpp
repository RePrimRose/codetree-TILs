#include <iostream>
using namespace std;

int n, m;
int ans[100][100];
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

bool InRange(int x, int y) {
    return 0 <= x && x < m && 0 <= y && y < n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;

    int x = 0, y = 0, dir = 0;
    ans[x][y] = 1;

    for(int i = 2; i <= n * m; i++) {
        int nx = x + dx[dir], ny = y + dy[dir];

        if(!InRange(nx, ny) || ans[ny][nx] != 0) dir = (dir + 1) % 4;

        x = x + dx[dir]; y = y + dy[dir];
        ans[y][x] = i;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}