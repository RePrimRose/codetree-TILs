#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

#define MAX 10001

int n, k;
char arr[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        int loc;
        char alpha;
        cin >> loc >> alpha;
        arr[loc] = alpha;
    }

    int maxScore = INT_MIN;
    for(int i = 1; i <= MAX - k - 1; i++) {
        int sum = 0;
        for(int j = i; j <= i + k; j++) {
            if(arr[j] == 'G') sum += 1;
            if(arr[j] == 'H') sum += 2;
        }
        maxScore = max(maxScore, sum);
    }

    cout << maxScore;

    return 0;
}