#include <iostream>
#include <algorithm>
using namespace std;

#define N 2
#define MAX_R 2000
#define OFFSET 1000

int x1[N], y1[N];
int x2[N], y2[N];

int checked[MAX_R + 1][MAX_R + 1];

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        
        x1[i] += OFFSET;
        y1[i] += OFFSET;
        x2[i] += OFFSET;
        y2[i] += OFFSET;
    }

    for(int i = 0; i < N; i++) {
        for(int x = x1[i]; x < x2[i]; x++) {
            for(int y = y1[i]; y < y2[i]; y++) {
                checked[x][y] = i + 1;
            }
        }
    }

    int min_x = 2000;
    int min_y = 2000;
    int max_x = 0;
    int max_y = 0;
    for(int i = 0; i <= MAX_R; i++) {
        for(int j = 0; j <= MAX_R; j++) {
            if(checked[i][j] == 1) {
                min_x = min(min_x, i);
                min_y = min(min_y, j);
                max_x = max(max_x, i + 1);
                max_y = max(max_y, j + 1);
            }
        }
    }

    if(min_x == 2000 && min_y == 2000) {
        min_x = 0;
        min_y = 0;
    }
    
    cout << (max_x - min_x) * (max_y - min_y);

    return 0;
}