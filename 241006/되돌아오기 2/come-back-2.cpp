#include <iostream>
#include <string>
using namespace std;

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};
int x, y;
int elapsedTime;
int dir = 3;

int main() {
    // 여기에 코드를 작성해주세요.
    string order;
    cin >> order;

    bool isBack = false;
    for(int i = 0; i < order.size(); i++) {
        if(order[i] == 'R') dir = (dir + 1) % 4;
        else if(order[i] == 'L') dir = (dir - 1 + 4) % 4;
        else {
            x += dx[dir];
            y += dy[dir];
        }

        elapsedTime++;

        if(x == 0 && y == 0) {
            isBack = true;
            break;
        }
    }

    if(isBack) cout << elapsedTime;
    else cout << -1;

    return 0;
}