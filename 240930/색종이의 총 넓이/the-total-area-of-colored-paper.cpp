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
        int x1, y1;

        cin >> x1 >> y1;

        x1 += OFFSET;
        y1 += OFFSET;

        for(int j = x1; j < x1 + 8; j++) {
            for(int k = y1; k < y1 + 8; k++) {
                checked[j][k] = 1;
            }
        }
    }

    int sum = 0;
    for(int i = 0; i <= MAX_R; i++) {
        for(int j = 0; j <= MAX_R; j++) {
            if(checked[i][j]) sum++;
        }
    }

    cout << sum;
 
    return 0;
}