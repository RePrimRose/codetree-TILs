#include <iostream>
#include <queue>

using namespace std;

int n, m;
int a[101][101];
bool visited[101][101];
queue<pair<int, int>> q;

bool in_range(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < m;
}

bool can_go(int x, int y) {
    if(!in_range(x, y)) return false;
    if(visited[x][y] || a[x][y] == 0) return false;

    return true;
}

void bfs() {
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    while(!q.empty()) {
        pair<int, int> curr_pos = q.front();
        q.pop();

        int x = curr_pos.first;
        int y = curr_pos.second;
        visited[x][y] = true;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(can_go(nx, ny)) {
                q.push({nx, ny});
            }
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Write your code here!
    q.push({0, 0});
    bfs();

    if(visited[n - 1][m - 1] == true) cout << 1;
    else cout << 0;

    return 0;
}
