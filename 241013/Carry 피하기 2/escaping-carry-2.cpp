#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int n;
int arr[20];

bool isCarried(int x, int y) {
    while(true) {
        if(x == 0 || y == 0) return false;
        if(x % 10 + y % 10 > 9) {
            return true;
        }
        x /= 10;
        y /= 10;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxSum = INT_MIN;

    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i + 1; j < n; j++) {
            int x = arr[i], y = arr[j];
            if(isCarried(x, y)) continue;
            sum = x + y;
            for(int k = j + 1; k < n; k++) {
                int z = arr[k];
                if(isCarried(sum, z)) continue;
                maxSum = max(maxSum, sum + z);
            }
        }
    }

    if(maxSum == INT_MIN) cout << -1;
    else cout << maxSum;

    return 0;
}