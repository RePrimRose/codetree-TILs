#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int x = 0, y = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        char direction;
        int distance;
        cin >> direction >> distance;

        if(direction == 'N') y += distance;
        else if(direction == 'S') y -= distance;
        else if(direction == 'W') x -= distance;
        else if(direction == 'E') x += distance;
    }

    cout << x << " " << y;

    return 0;
}