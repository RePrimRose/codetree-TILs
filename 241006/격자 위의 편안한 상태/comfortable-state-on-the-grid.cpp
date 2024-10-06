#include <iostream>
using namespace std;

int n, m;
int arr[101][101];
int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};

bool InRange(int x, int y) {
    return 0 < x && x <= n && 0 < y && y <= n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int r, c;
        cin >> r >> c;

        arr[r][c] = 1;
        int cnt = 0;
        for(int j = 0; j < 4; j++) {
            int nx = c + dx[j];
            int ny = r + dy[j];

            if(InRange(nx, ny) && arr[ny][nx] == 1) cnt++; 
        }

        if(cnt == 3) cout << 1 << endl;
        else cout << 0 << endl;
    }

    return 0;
}