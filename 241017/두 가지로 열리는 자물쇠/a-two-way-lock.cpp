#include <iostream>
using namespace std;

int n;
int a[2], b[2], c[2];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    cin >> a[0] >> b[0] >> c[0];
    cin >> a[1] >> b[1] >> c[1];

    int ans = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            for(int k = 1; k <= n; k++) {
                bool firstCondition = abs(i - a[0]) < 3 || n - abs(i - a[0]) < 3;
                bool secondCondition = abs(j - b[0]) < 3 || n - abs(j - b[0]) < 3;
                bool thirdCondition = abs(k - c[0]) < 3 || n - abs(k - c[0]) < 3;
                bool fourthCondition = abs(i - a[1]) < 3 || n - abs(i - a[1]) < 3;
                bool fifthCondition = abs(j - b[1]) < 3 || n - abs(j - b[1]) < 3;
                bool sixthCondition = abs(k - c[1]) < 3 || n - abs(k - c[1]) < 3;
                bool firstC = firstCondition && secondCondition && thirdCondition;
                bool secondC = fourthCondition && fifthCondition && sixthCondition;
                if(firstC || secondC) ans++;
            }
        }
    }
    
    cout << ans;

    return 0;
}