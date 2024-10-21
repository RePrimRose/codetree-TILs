#include <iostream>
using namespace std;

#define MAX 10
#define LINE_MAX 101

int n;
int a[MAX], b[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    int ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            for(int k = j + 1; k < n; k++) {
                int counting[LINE_MAX] = {};

                for(int l = 0; l < n; l++) {
                    if(l == i || l == j || l == k) continue;
                    for(int pos = a[l]; pos <= b[l]; pos++) {
                        counting[pos]++;
                    }
                }

                bool isPossible = true;
                int curr_num;

                for(int l = 0; l < LINE_MAX; l++) {
                    curr_num = counting[l];

                    if(curr_num > 1) {
                        isPossible = false;
                        break;
                    }
                }

                if(isPossible) ans++;
            }

    cout << ans;

    return 0;
}