#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <vector>
using namespace std;

int t, a, b;
vector<int> s, n;

bool check_special(int pos) {
    int s_pos, n_pos;
    int temp = INT_MAX;
    
    for(int i = 0; i < s.size(); i++) {
        if(temp > abs(pos - s[i])) {
            s_pos = i;
            temp = abs(pos - s[i]);
        }
    }

    temp = INT_MAX;
    for(int i = 0; i < s.size(); i++) {
        if(temp > abs(pos - n[i])) {
            n_pos = i;
            temp = abs(pos - n[i]);
        }
    }

    if(abs(pos - s[s_pos]) <= abs(pos - n[n_pos])) return true;

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