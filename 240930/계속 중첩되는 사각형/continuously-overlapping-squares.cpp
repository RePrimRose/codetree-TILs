#include <iostream>
using namespace std;

#define MAX_R 200
#define OFFSET 100

int checked[MAX_R + 1][MAX_R + 1];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int x1, y1, x2, y2;

        cin >> x1 >> y1 >> x2 >> y2;

        x1 += OFFSET;
        y1 += OFFSET;
        x2 += OFFSET;
        y2 += OFFSET;

        for(int j = x1; j < x2; j++) {
            for(int k = y1; k < y2; k++) {
                if(i % 2 == 0) {
                    checked[j][k] = 2;
                } else {
                    checked[j][k] = 1;
                }
            }
        }
    }

    int blueArea = 0;
    for(int i = 0; i <= MAX_R; i++) {
        for(int j = 0; j <= MAX_R; j++) {
            if(checked[i][j] == 1) blueArea++;
        }
    }

    cout << blueArea;

    return 0;
}