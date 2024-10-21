#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 1000

int n, b;
pair<int, int> student[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> b;

    for(int i = 0; i < n; i++)
        cin >> student[i].first >> student[i].second;

    int ans = 0;
    for(int i = 0; i < n; i++) {
        int cost[MAX];
        for(int j = 0; j < n; j++) {
            if(i == j) cost[j] = student[j].first / 2 + student[j].second;
            else cost[j] = student[j].first + student[j].second;
        }

        sort(cost, cost + n);

        int sum_budget = 0;
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            sum_budget += cost[j];
            if(sum_budget > b) break;
            cnt++;
        }

        ans = max(ans, cnt);
    }

    cout << ans;

    return 0;
}