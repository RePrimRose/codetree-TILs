#include <iostream>
#include <queue>

using namespace std;

int n, k;
int grid[100][100];
int r, c;
int max_num, max_r, max_c;
bool visited[100][100];
queue<pair<int, int>> q;

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

bool can_go(int x, int y, int value) {
    return in_range(x, y) && !visited[x][y] && grid[x][y] < value;
}

void bfs() {
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    int value = grid[r][c];

    while(!q.empty()) {
        pair<int, int> curr_pos = q.front();
        q.pop();

        int x = curr_pos.first;
        int y = curr_pos.second;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (can_go(nx, ny, value)) {
                if (max_num < grid[nx][ny]) {
                    max_num = grid[nx][ny];
                    max_r = nx;
                    max_c = ny;
                } else if (max_num == grid[nx][ny]) {
                    if (max_r > nx) {
                        max_r = nx;
                        max_c = ny;
                    } else if (max_r == nx) {
                        if (max_c > ny) {
                            max_r = nx;
                            max_c = ny;
                        }
                    }
                }
                
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }

    r = max_r;
    c = max_c;
    max_num = 0;
}

int main() {
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    cin >> r >> c;
    r--; c--;

    // Write your code here!
    for (int i = 0; i < k; i++) {
        visited[r][c] = true;
        q.push({r, c});
        bfs();
        reset_visited();
    }

    cout << r + 1 << " " << c + 1;

    return 0;
}
