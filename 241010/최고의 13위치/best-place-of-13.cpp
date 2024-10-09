#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define MAX_N 20

int n;
int arr[MAX_N][MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int maxCoins = INT_MIN;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 2; j++) {
            int cnt = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
            maxCoins = max(maxCoins, cnt);
        }
    }

    cout << maxCoins;
        
    return 0;
}