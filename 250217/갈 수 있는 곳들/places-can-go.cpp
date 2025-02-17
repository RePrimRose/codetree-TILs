#include <iostream>
#include <queue>

using namespace std;

int n, k;
int grid[100][100];
int r[10000], c[10000];
bool visited[100][100];
queue<pair<int, int>> q;

bool in_range(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

bool can_go(int x, int y) {
    if(!in_range(x, y)) return false;
    if(visited[x][y] || grid[x][y] == 1) return false;

    return true;
}

int bfs() {
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    int cnt = 1;

    while(!q.empty()) {
        pair<int, int> curr_pos = q.front();
        q.pop();

        int x = curr_pos.first;
        int y = curr_pos.second;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(can_go(nx, ny)) {
                visited[nx][ny] = true;
                cnt++;
                q.push({nx, ny});
            }
        }
    }

    return cnt;
}

int main() {
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> grid[i][j];

    for (int i = 0; i < k; i++) cin >> r[i] >> c[i];

    // Write your code here!
    int answer = 0;

    for (int i = 0; i < k; i++) {
        if(can_go(r[i] - 1, c[i] - 1)) {
            visited[r[i] - 1][c[i] - 1] = true;
            q.push({r[i] - 1, c[i] - 1});
            answer += bfs();
        }
    }

    cout << answer;

    return 0;
}
