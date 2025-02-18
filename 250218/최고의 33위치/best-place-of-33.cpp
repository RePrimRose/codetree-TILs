#include <iostream>
#include <algorithm>

using namespace std;

int N;
int grid[20][20];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    // Write your code here!
    int answer = 0;

    for (int i = 0; i < N - 2; i++) {
        for (int j = 0; j < N - 2; j++) {
            int cnt = 0;

            for (int k = i; k < i + 3; k++) {
                for (int l = j; l < j + 3; l++) {
                    if(grid[k][l]) cnt++;
                }
            }

            answer = max(answer, cnt);
        }
    }

    cout << answer;

    return 0;
}
