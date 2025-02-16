#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M, max_k;
int grid[50][50];
int safe_area[101];
bool visited[50][50];

bool in_range(int x, int y) {
    return 0 <= x && x < N && 0 <= y && y < M;
}

bool can_go(int x, int y, int k) {
    if(!in_range(x, y)) return false;
    if(visited[x][y] || grid[x][y] <= k) return false;
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

        if(can_go(nx, ny, k)) {
            cnt = dfs(nx, ny, k);
        }
    }

    return cnt;
}

void reset_visited() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            visited[i][j] = false;
        }
    }
}

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> grid[i][j];
            max_k = max(max_k, grid[i][j]);
        }
    }

    // Write your code here!
    int answer = 0;

    for (int k = 1; k < max_k; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (can_go(i, j, k)) {
                    safe_area[k] += dfs(i, j, k);
                }
            }
        }
        reset_visited();
    }

    int area = 0;

    for (int k = 1; k < max_k; k++) {
        if(area < safe_area[k]) {
            area = safe_area[k];
            answer = k;
        }
    }

    cout << answer << " " << area;

    return 0;
}
