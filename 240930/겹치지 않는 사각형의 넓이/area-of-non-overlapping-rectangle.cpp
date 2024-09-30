#include <iostream>
using namespace std;

#define MAX_R 2000
#define OFFSET 1000

int checked[MAX_R + 1][MAX_R + 1];

int main() {
    // 여기에 코드를 작성해주세요.
    int x1, y1, x2, y2;

    for(int i = 0; i < 2; i++) {
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += OFFSET;
        y1 += OFFSET;
        x2 += OFFSET;
        y2 += OFFSET;

        for(int j = x1; j < x2; j++) {
            for(int k = y1; k < y2; k++) {
                checked[j][k] = 1;
            }
        }
    }

    cin >> x1 >> y1 >> x2 >> y2;

    x1 += OFFSET;
    y1 += OFFSET;
    x2 += OFFSET;
    y2 += OFFSET;

    for(int i = x1; i < x2; i++) {
        for(int j = y1; j < y2; j++) {
                checked[i][j] = 2;
        }
    }

    int sum = 0;
    for(int i = 0; i <= MAX_R; i++) {
        for(int j = 0; j <= MAX_R; j++) {
            if(checked[i][j] == 1) sum++;
        }
    }

    cout << sum;
 
    return 0;
}