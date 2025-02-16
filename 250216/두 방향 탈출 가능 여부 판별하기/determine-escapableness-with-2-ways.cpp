#include <iostream>

using namespace std;

int n, m;
int grid[100][100];
bool visited[100][100];

bool inRange(int x, int y) {
    return x >= n || y >= m;
}

bool canGo(int x, int y) {
    if(visited[x][y] || grid[x][y] == 0) return false;
    if(inRange(x, y)) return false;
    return true;
}

void dfs(int x, int y) {
    int dx[2] = {0, 1};
    int dy[2] = {1, 0};

    visited[x][y] = true;

    for (int i = 0; i < 2; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(canGo(nx, ny)) {
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    // Write your code here!
    dfs(0, 0);

    if(visited[n - 1][m - 1]) cout << 1;
    else cout << 0;

    return 0;
}
