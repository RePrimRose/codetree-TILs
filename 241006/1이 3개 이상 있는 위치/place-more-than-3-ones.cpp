#include <iostream>
using namespace std;

int n;
int arr[100][100];
int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int cnt = 0;
            for(int dir = 0; dir < 4; dir++) {
                int nx = i + dx[dir], ny = j + dy[dir];
                if(InRange(i, j) && arr[nx][ny]) cnt++;
            }
            
            if(cnt >= 3) ans++;
        }
    }

    cout << ans;

    return 0;
}