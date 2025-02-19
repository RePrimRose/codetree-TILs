#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int n, m;
int grid[20][20];
bool visited[20][20];

queue<pair<pair<int, int>, int>> q;

void reset_visited() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            visited[i][j] = false;
        }
    }
}

bool in_range(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

bool can_go(int x, int y, int move_cnt, int k) {
    return in_range(x, y) && !visited[x][y] && move_cnt < k;
}

int bfs(int k) {
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    int cnt = 0;

    while(!q.empty()) {
        int move_cnt = q.front().second;
        pair<int, int> curr_pos = q.front().first;
        q.pop();

        int x = curr_pos.first;
        int y = curr_pos.second;

        if (grid[x][y]) cnt++;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (can_go(nx, ny, move_cnt, k)) {
                visited[nx][ny] = true;
                q.push({{nx, ny}, move_cnt + 1});
            }
        }
    }

    return cnt;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Write your code here!
    int answer = 0;

    for (int k = 0; k <= 2 * (n - 1); k++) {
        int mine_cost = k * k + (k + 1) * (k + 1);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                visited[i][j] = true;
                q.push({{i, j}, 0});
                int gold_cnt = bfs(k);

                if(gold_cnt * m - mine_cost >= 0) {
                    answer = max(answer, gold_cnt);
                }

                reset_visited();
            }
        }
    }

    cout << answer;

    return 0;
}
