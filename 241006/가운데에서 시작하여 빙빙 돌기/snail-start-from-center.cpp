#include <iostream>
using namespace std;

int n;
int ans[100][100];
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    int x = n - 1, y = n - 1, dir = 2;
    ans[x][y] = n * n;

    for(int i = n * n - 1; i > 0; i--) {
        int nx = x + dx[dir], ny = y + dy[dir];

        if(!InRange(nx, ny) || ans[nx][ny] != 0) dir = (dir + 1) % 4;

        x = x + dx[dir]; y = y + dy[dir];
        ans[x][y] = i;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}