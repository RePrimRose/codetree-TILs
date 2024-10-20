#include <iostream>
#include <algorithm>
#include <climits>
#include <cstdlib>
using namespace std;

#define MAX 100

int n;
int x[MAX], y[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) 
        cin >> x[i] >> y[i];

    int ans = INT_MAX;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int x_dis = abs(x[i] - x[j]);
            int y_dis = abs(y[i] - y[j]);
            int xy_dis = x_dis * x_dis + y_dis * y_dis;
            ans = min(ans, xy_dis);
        }
    }

    cout << ans;

    return 0;
}