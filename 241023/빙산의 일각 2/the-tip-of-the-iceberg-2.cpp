#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 100

int n;
int iceberg[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> iceberg[i];
    }

    int ans = 0;
    for(int i = 0; i <= 1000; i++) {
        int cnt = 0;
        int curr_height = 0;
        for(int j = 0; j < n; j++) {
            if(curr_height <= 0 && iceberg[j] - i > 0) cnt++;
            curr_height = iceberg[j] - i;
        }
        ans = max(ans, cnt);
    }

    cout << ans;
    
    return 0;
}