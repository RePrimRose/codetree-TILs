#include <iostream>
#include <algorithm>
#include <climits>
#include <cstdlib>
using namespace std;

#define MAX 6

int arr[MAX];
int sumAll;

int getDiff(int i, int j, int k) {
    int teamOneSum = arr[i] + arr[j] + arr[k];
    int teamTwoSum = sumAll - teamOneSum;

    return abs(teamOneSum - teamTwoSum);
}

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 0; i < MAX; i++) {
        cin >> arr[i];
        sumAll += arr[i];
    }

    int ans = INT_MAX;
    for(int i = 0; i < MAX; i++)
        for(int j = i + 1; j < MAX; j++)
            for(int k = j + 1; k < MAX; k++)
                ans = min(ans, getDiff(i, j, k));

    cout << ans;

    return 0;
}