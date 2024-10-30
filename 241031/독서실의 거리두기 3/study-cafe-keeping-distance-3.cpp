#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n;
string str;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> str;

    int max_dist = 0;
    for(int i = 0; i < n; i++) {
        if(str[i] == '0') continue;

        int cnt = 1;
        for(int j = i + 1; j < n; j++) {
            if(str[j] == '1') {
                max_dist = max(max_dist, cnt);
                break;
            }
            cnt++;
        }
    }

    if(max_dist % 2 == 0) cout << max_dist / 2;
    else cout << max_dist / 2 + 1;

    return 0;
}