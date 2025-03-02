#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, answer;
int grid[20][20];
int area[20][20];
vector<pair<int, int>> bomb_pos;
vector<vector<pair<int, int>>> bomb_patterns = {
    { {-2, 0}, {-1, 0}, {0, 0}, {1, 0}, {2, 0} },
    { {-1, 0}, {1, 0}, {0, 0}, {0, -1}, {0, 1} },
    { {0, 0}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1} }
};

bool in_range(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

int count_area() {
    int sum = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (area[i][j] > 0) sum++;

    return sum;
}

void paint_area(int i, int x, int y, bool type) {
    for (int j = 0; j < bomb_patterns[i].size(); j++) {
        int nx = x + bomb_patterns[i][j].first;
        int ny = y + bomb_patterns[i][j].second;

        if (in_range(nx, ny)) {
            if (type) area[nx][ny]++;
            else area[nx][ny]--;
        }
    }
}

void f(int curr) {
    if (curr == bomb_pos.size()) {
        answer = max(answer, count_area());
        return;
    }

    int x = bomb_pos[curr].first;
    int y = bomb_pos[curr].second;

    for (int i = 0; i < bomb_patterns.size(); i++) {
        paint_area(i, x, y, true);
        f(curr + 1);
        paint_area(i, x, y, false);
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
            if (grid[i][j]) bomb_pos.push_back({i, j});
        }
    }

    // Please write your code here.
    f(0);

    cout << answer;

    return 0;
}
