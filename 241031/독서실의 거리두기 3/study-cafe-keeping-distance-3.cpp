#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;

int n;
string str;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> str;

    int max_dist = 0;
    int min_dist = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(str[i] == '0') continue;

        int cnt = 1;
        for(int j = i + 1; j < n; j++) {
            if(str[j] == '1') {
                max_dist = max(max_dist, cnt);
                min_dist = min(min_dist, cnt);
                break;
            }
            cnt++;
        }
    }

    if(min_dist == 1) cout << 1;
    else cout << max_dist / 2;

    return 0;
}