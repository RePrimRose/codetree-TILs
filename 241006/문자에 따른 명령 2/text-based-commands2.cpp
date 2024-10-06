#include <iostream>
#include <string>
using namespace std;

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;

    int x = 0, y = 0;
    int dir = 3;
    for(int i = 0; i < str.size(); i++) {
        char order = str[i];

        if(order == 'L') {
            dir = (dir - 1 + 4) % 4;
        } else if(order == 'R') {
            dir = (dir + 1) % 4;
        } else {
            x = x + dx[dir];
            y = y + dy[dir];
        }
    }

    cout << x << " " << y;

    return 0;
}