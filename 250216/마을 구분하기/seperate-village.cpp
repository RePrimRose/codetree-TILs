#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int grid[25][25];
bool visited[25][25];
vector<int> v;

bool inRange(int x, int y) {
    return (x < n && x >= 0) && (y < n && y >= 0);
}

bool canGo(int x, int y) {
    if(!inRange(x, y)) return false;
    if(visited[x][y] || grid[x][y] == 0) return false;
    return true;
}

int dfs(int x, int y) {
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int cnt = 1;
    visited[x][y] = true;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(canGo(nx, ny)) {
            cnt += dfs(nx, ny);
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

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (canGo(i, j)) {
                v.push_back(dfs(i, j));
            }
        }
    }

    sort(v.begin(), v.end());

    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}