#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 101

int n;
char arr[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        int num; char c;
        cin >> num >> c;
        arr[num] = c;
    }

    int ans = 0;
    for(int i = 0; i < MAX; i++) {
        int gCnt = 0, hCnt = 0;
        if(arr[i] == 'G' || arr[i] == 'H') {
            for(int j = i; j < MAX; j++) {
                if(arr[j] == 'G' || arr[j] == 'H') {
                    if(arr[j] == 'G') gCnt++;
                    if(arr[j] == 'H') hCnt++;
                    if(arr[j] == 'G' || arr[j] == 'H') {
                        if(gCnt > 0 && hCnt == 0) ans = max(ans, j - i);
                        else if(gCnt == 0 && hCnt > 0) ans = max(ans, j - i);
                        else if(gCnt == hCnt) ans = max(ans, j - i);
                    }
                }
            }
        }
    }
    
    cout << ans;

    return 0;
}