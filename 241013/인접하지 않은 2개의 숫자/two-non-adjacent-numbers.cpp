#include <iostream>
#include <climits>
using namespace std;

int n;
int arr[100];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxSum = INT_MIN;
    for(int i = 0; i < n; i++) {
        for(int j = i + 2; j < n; j++) {
            maxSum = max(maxSum, arr[i] + arr[j]);
        }
    }

    cout << maxSum;

    return 0;
}