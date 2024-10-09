#include <iostream>
using namespace std;

#define MAX_N 15

int r,c;
char arr[MAX_N][MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> r >> c;

    for(int i = 0; i < r; i ++) {
        for(int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
    
    int ans = 0;
    char start_color = arr[0][0];
    for(int i = 1; i < r - 2; i++) {
        if(start_color == arr[r - 1][c - 1]) break;
        for(int j = 1; j < c - 2; j++) {
            if(start_color != arr[i][j]) {
                for(int k = i + 1; k < r - 1; k++) {
                    for(int l = j + 1; l < c - 1; l++) {
                        if(start_color == arr[k][l]) ans++;
                    }
                }
            }
        }
    }

    cout << ans;

    return 0;
}