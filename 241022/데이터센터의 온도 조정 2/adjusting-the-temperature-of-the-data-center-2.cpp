#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 1000

int n, c, g, h;
int Ta[MAX], Tb[MAX];

int getTemp(int a, int b, int temp) {
    if(temp < a) return c;
    else if(temp <= b) return g;
    else return h;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> c >> g >> h;

    for(int i = 0; i < n; i++) {
        cin >> Ta[i] >> Tb[i];
    }

    int ans = 0;
    for(int temp = 0; temp <= MAX; temp++) {
        int workload = 0;
        for(int i = 0; i < n; i++) {
            workload += getTemp(Ta[i], Tb[i], temp);
        }
        ans = max(ans, workload);
    }

    cout << ans;

    return 0;
}