#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 1000

int n, b;
pair<int, int> student[MAX];

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> b;

    for(int i = 0; i < n; i++)
        cin >> student[i].first >> student[i].second;

    sort(student, student + n, cmp);

    int ans = 0;
    for(int i = 0; i < n; i++) {
        int sum_budget = 0;
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            if(i == j) sum_budget += student[j].first / 2 + student[j].second;
            else sum_budget += student[j].first + student[j].second;

            if(sum_budget >= b) break;
            cnt++;
        }

        ans = max(ans, cnt);
    }

    cout << ans;

    return 0;
}