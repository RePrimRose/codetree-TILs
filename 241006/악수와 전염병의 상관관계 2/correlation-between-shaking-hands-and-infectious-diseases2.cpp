#include <iostream>
#include <algorithm>
using namespace std;

pair<int, int> d[101];
pair<int, pair<int, int>> timeLine[250];

bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) {
    return a.first < b.first;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k, p ,t;
    cin >> n >> k >> p >> t;

    for(int i = 0; i < t; i++) {
        cin >> timeLine[i].first >> timeLine[i].second.first >> timeLine[i].second.second;
    }

    sort(timeLine, timeLine + t, cmp);

    d[p].first = 1;
    d[p].second = 2;

    for(int i = 0; i < t; i++) {
        int a = timeLine[i].second.first;
        int b = timeLine[i].second.second;

        if(d[a].first == 1) {
            if(d[a].second > 0) {
                d[a].second--;
                if(d[b].first == 0) {
                    d[b].first = 1;
                    d[b].second = 2;
                    continue;
                }
            }
        }

        if(d[b].first == 1) {
            if(d[b].second > 0) {
                d[b].second--;
                if(d[a].first == 0) {
                    d[a].first = 1;
                    d[a].second = 2;
                }
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        cout << d[i].first;
    }

    return 0;
}