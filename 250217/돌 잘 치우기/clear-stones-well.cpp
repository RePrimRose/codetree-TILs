#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int n, k, m;
int grid[100][100];
int r[10000], c[10000];
bool visited[100][100];

vector<pair<int, int>> rock_pos;
vector<pair<int, int>> selected;
vector<vector<pair<int, int>>> results;

queue<pair<int, int>> q;

void reset_visited() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            visited[i][j] = false;
        }
    }
}

void combination(int index, int k) {
    if (selected.size() == k) {
        results.push_back(selected);
        return;
    }

    for (int i = index; i < rock_pos.size(); ++i) {
        selected.push_back(rock_pos[i]);
        combination(i + 1, k);
        selected.pop_back();
    }
}

bool in_range(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

bool can_go(int x, int y) {
    return in_range(x, y) && !visited[x][y] && grid[x][y] == 0;
}

void bfs() {
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};

    while(!q.empty()) {
        pair<int, int> curr_pos = q.front();
        int x = curr_pos.first;
        int y = curr_pos.second;
        q.pop();

        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(can_go(nx, ny)) {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
}

int main() {
    cin >> n >> k >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 1) {
                rock_pos.push_back({i, j});
            }
        }

    for (int i = 0; i < k; i++) {
        cin >> r[i] >> c[i];
        r[i]--;
        c[i]--;
    }

    combination(0, m);

    // Write your code here!
    int answer = 0;

    for (int i = 0; i < results.size(); i++) {
        for (int j = 0; j < results[i].size(); j++) {
            int x = results[i][j].first;
            int y = results[i][j].second;
            grid[x][y] = 0;
        }

        for (int j = 0; j < k; j++) {
            visited[r[j]][c[j]] = true;
            q.push({r[j], c[j]});
        }

        bfs();

       for (int j = 0; j < results[i].size(); j++) {
            int x = results[i][j].first;
            int y = results[i][j].second;
            grid[x][y] = 1;
        }

        int cnt = 0;
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if(visited[j][k]) cnt++;
            }
        }

        answer = max(answer, cnt);

        reset_visited();
    }

    cout << answer;

    return 0;
}
