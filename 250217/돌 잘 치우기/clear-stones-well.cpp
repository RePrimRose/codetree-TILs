#include <iostream>
#include <queue>

using namespace std;

int n, k, m;
int grid[100][100];
int r[10000], c[10000];
bool visited[100][100][9];
queue<pair<pair<int, int>, int>> q;

bool in_range(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

bool can_go(int x, int y, int cnt) {
    return in_range(x, y) && !visited[x][y][cnt] && grid[x][y] == 0;
}

bool can_break(int x, int y, int cnt) {
    return in_range(x, y) && !visited[x][y][cnt + 1] && grid[x][y] == 1 && cnt < m;
}

void bfs() {
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};

    while(!q.empty()) {
        pair<int, int> curr_pos = q.front().first;
        int x = curr_pos.first;
        int y = curr_pos.second;
        int break_cnt = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(can_go(nx, ny, break_cnt)) {
                visited[nx][ny][break_cnt] = true;
                q.push({{nx, ny}, break_cnt});
            } else if(can_break(nx, ny, break_cnt)) {
                visited[nx][ny][break_cnt + 1] = true;
                q.push({{nx, ny}, break_cnt + 1});
            }
        }
    }
}

int main() {
    cin >> n >> k >> m;

    int total_rock_cnt = 0;
    int zero_cnt = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
            if(grid[i][j]) total_rock_cnt++;
            else zero_cnt++;
        }

    for (int i = 0; i < k; i++) {
        cin >> r[i] >> c[i];
        r[i]--;
        c[i]--;
    }

    // Write your code here!
    for (int i = 0; i < k; i++) {
        visited[r[i]][c[i]][0] = true;
        q.push({{r[i], c[i]}, 0});
    }

    bfs();

    int answer = 0;
    int visited_rock_cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(visited[i][j][m]) {
                if(grid[i][j] == 1) visited_rock_cnt++;
                answer++;
            }
        }
    }

    if(answer - (total_rock_cnt - m) == zero_cnt) cout << zero_cnt;
    else cout << answer - (visited_rock_cnt - m);

    return 0;
}
