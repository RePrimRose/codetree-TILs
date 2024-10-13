#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

int n;
pair<int, int> checkPoint[100];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> checkPoint[i].first >> checkPoint[i].second;
    }

    int minDistance = INT_MAX;
    for(int i = 1; i < n - 1; i++) {
        int sumDistance = 0;
        int x = checkPoint[0].first;
        int y = checkPoint[0].second;
        for(int j = 1; j < n; j++) {
            if(i == j) continue;
            int nx = checkPoint[j].first;
            int ny = checkPoint[j].second;
            sumDistance += abs(x - nx) + abs(y - ny);
            x = nx;
            y = ny;
        }
        minDistance = min(minDistance, sumDistance);
    }

    cout << minDistance;

    return 0;
}