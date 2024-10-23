#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 1000

int a, b, c;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> a >> b >> c;

    int ans = 0;
    for(int i = 0; i <= MAX; i++) {
        if(a * i > c) break;
        for(int j = 0; j <= MAX; j++) {
            int num = a * i + b * j;
            if(num > c) break;
            ans = max(ans, a * i + b * j);
        }
    }

    cout << ans;

    return 0;
}