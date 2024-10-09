#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int maxNum = INT_MIN;

    for(int i = 0; i < 10; i++) {
        int n;
        cin >> n;

        maxNum = max(maxNum, n);
    }

    cout << maxNum;

    return 0;
}