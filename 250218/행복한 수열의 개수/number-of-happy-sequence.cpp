#include <iostream>

using namespace std;

int n, m;
int grid[100][100];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Write your code here!
    int answer = 0;

    for (int i = 0; i < n; i++) {
        int curr_num = grid[i][0];
        int cnt = 1;
        for (int j = 1; j < n; j++) {
            if (curr_num == grid[i][j]) {
                cnt++;
            } else {
                curr_num = grid[i][j];
                cnt = 1;
            }

            if (cnt >= m) {
                answer++;
                break;
            }
        }

        curr_num = grid[0][i];
        cnt = 1;
        for (int j = 1; j < n; j++) {
            if (curr_num == grid[j][i]) {
                cnt++;
            } else {
                curr_num = grid[j][i];
                cnt = 1;
            }

            if (cnt >= m) {
                answer++;
                break;
            }
        }
    }

    cout << answer;

    return 0;
}
