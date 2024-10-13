#include <iostream>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

int n;
int arr[1003];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minDistance = INT_MAX;
    for(int i = 0; i < n; i++) {
        int sumDistance = 0;
        for(int j = 0; j < n; j++) {
            sumDistance += (j - i + n) % n * arr[j];
        }
        minDistance = min(minDistance, sumDistance);
    }

    cout << minDistance;

    return 0;
}