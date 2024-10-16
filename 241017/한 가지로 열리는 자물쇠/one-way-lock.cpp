#include <iostream>
#include <cstdlib>
using namespace std;

int n, a, b, c;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> a >> b >> c;

    int ans = 0;
    for(int i = 1; i <= n; i++) 
        for(int j = 1; j <= n; j++) 
            for(int k = 1; k <= n; k++) 
                if(abs(i - a) < 3 || abs(j - b) < 3 || abs(k - c) < 3) ans++;

    cout << ans;

    return 0;
}