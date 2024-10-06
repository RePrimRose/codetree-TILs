#include <iostream>
#include <string>
using namespace std;

int arr[99][99];
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};
int dir = 1;
int n, t;

bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < x;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string order;
    cin >> n >> t;
    cin >> order;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int x = n / 2, y = n / 2;
    int sum = arr[x][y];

    for(int i = 0; i < order.size(); i++) {
        if(order[i] == 'R') dir = (dir + 1) % 4;
        else if(order[i] == 'L') dir = (dir - 1 + 4) % 4;
        else {
            int nx = x + dx[dir], ny = y + dy[dir];
            if(!InRange(nx, ny)) continue;
            x += dx[dir];
            y += dy[dir];
            sum += arr[x][y];
        }
    }

    cout << sum;

    return 0;
}