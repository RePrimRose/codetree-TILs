#include <iostream>
using namespace std;

int x;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> x;

    int speed = 1;
    int ans = 0;
    while (x) {
        x -= speed;
        ans++;

        if (x >= (speed + 1) * (speed + 2) / 2) speed++;
        else if (x >= speed * (speed + 1) / 2) continue;
        else speed--;
    }

    cout << ans;

    return 0;
}