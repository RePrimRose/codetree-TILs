#include <iostream>
using namespace std;

#define N 19

int arr[N][N];

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }

    int ans = 0, x = 0, y = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            int curr = arr[i][j];
            if(curr == 1 || curr == 2) {
                int rightStone = 1, underStone = 1, diagonalDownStone = 1, diagonalUpStone = 1;
                for(int k = 1; k < 5; k++) {
                    if(j + k * 1 < N && arr[i][j + k * 1] == curr) rightStone++;
                    if(i + k * 1 < N && arr[i + k * 1][j] == curr) underStone++;
                    if(j + k * 1 < N && i + k * 1 < N && arr[i + k * 1][j + k * 1] == curr) diagonalDownStone++;
                    if(j + k * 1 < N && i - k * 1 >= 0 && arr[i - k * 1][j + k * 1] == curr) diagonalUpStone++;
                }
                if(rightStone == 5) {
                    ans = curr;
                    x = j + 3;
                    y = i + 1;
                }
                if(underStone == 5) {
                    ans = curr;
                    x = j + 1;
                    y = i + 3;
                }
                if(diagonalDownStone == 5) {
                    ans = curr;
                    x = j + 3;
                    y = i + 3;
                }
                if(diagonalUpStone == 5) {
                    ans = curr;
                    x = j + 3;
                    y = i - 1;
                }
            }
        }
    }

    cout << ans << endl;
    if(ans != 0) {
        cout << y << " " << x;
    }

    return 0;
}