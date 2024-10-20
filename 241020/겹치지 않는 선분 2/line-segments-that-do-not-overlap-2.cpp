#include <iostream>
using namespace std;

#define MAX 100

int n;
int x1[MAX], x2[MAX];
bool isOverlapped[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> x1[i] >> x2[i];

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if((x1[i] - x1[j]) * (x2[i] - x2[j]) < 0) {
                isOverlapped[i] = true; isOverlapped[j] = true;
                break;
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(!isOverlapped[i]) ans++;
    }

    cout << ans;

    return 0;
}