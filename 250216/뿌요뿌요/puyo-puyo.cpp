#include <iostream>
#include <algorithm>

using namespace std;

int n;
int grid[100][100];
bool visited[100][100];

bool in_range(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

bool can_go(int x, int y, int k) {
    if(!in_range(x, y)) return false;
    if(visited[x][y] || grid[x][y] != k) return false;

    return true; 
}

int dfs(int x, int y, int k) {
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int cnt = 1;

    visited[x][y] = true;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (can_go(nx, ny, k)) {
            cnt += dfs(nx, ny, k);
        }
    }

    return cnt;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Write your code here!
    int answer = 0;
    int max_k = 0;

    for (int k = 1; k <= 100; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (can_go(i, j, k)) {
                    int cnt = dfs(i, j, k);
                    if (cnt >= 4) answer++;
                    max_k = max(max_k, cnt);
                }
            }
        }
    }

    cout << answer << " " << max_k;

    return 0;
}
