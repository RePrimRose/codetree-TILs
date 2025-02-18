#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int n, m;
int grid[200][200];
const array<array<pair<int, int>, 2>, 6> shape = {{
    {{ {1, 0}, {0, 1} }},
    {{ {-1, 0}, {0, 1} }},
    {{ {1, 0}, {0, -1} }},
    {{ {-1, 0}, {0, -1} }},
    {{ {0, 1}, {0, 2} }},
    {{ {1, 0}, {2, 0} }}
}};

bool in_range(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < m;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    // Write your code here!

    int answer = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (size_t k = 0; k < shape.size(); k++) {
                int sum = grid[i][j];

                for (size_t l = 0; l < shape[k].size(); l++) {
                    int x = i + shape[k][l].first;
                    int y = j + shape[k][l].second;

                    if (in_range(x, y)) sum += grid[x][y];
                    else {
                        sum = 0;
                        continue;
                    }
                }

                answer = max(answer, sum);
            }
        }
    }

    cout << answer;

    return 0;
}
