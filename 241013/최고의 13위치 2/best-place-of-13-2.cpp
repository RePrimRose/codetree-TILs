#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

#define N 20

int n;
int arr[N][N];

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
            for(int k = i + 1; k < n; k++) {
                for(int l = 0; l < n - 2; l++) {
                    maxCoins = max(maxCoins, arr[i][j] + arr[i][j + 1] + arr[i][j + 2] +
                        arr[k][l] + arr[k][l + 1] + arr[k][l + 2]);
                }
            }
        }
    }

    cout << maxCoins;

    return 0;
}