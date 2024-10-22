#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
using namespace std;

int t, a, b;
vector<int> s, n;

bool check_special(int pos) {
    for(int i = 0; i < s.size(); i++) {
        int d1 = abs(pos - s[i]);
        for(int j = 0; j < n.size(); j++) {
            int d2 = abs(pos - n[j]);
            if(d1 <= d2) return true;
        }
    }

    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> t >> a >> b;

    for(int i = 0; i < t; i++) {
        int loc; char c;
        cin >> c >> loc;
        if(c == 'S') s.push_back(loc);
        else n.push_back(loc);
    }

    sort(s.begin(), s.end());
    sort(n.begin(), n.end());

    int ans = 0;
    for(int i = a; i <= b; i++) {
        if(check_special(i)) ans++;
    }

    cout << ans;

    return 0;
}