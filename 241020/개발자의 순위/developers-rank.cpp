#include <iostream>
using namespace std;

#define K_MAX 10
#define N_MAX 20

int k, n;
int ranking[K_MAX][N_MAX];
int count[N_MAX][N_MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> k >> n;

    for(int i = 0; i < k; i++)
        for(int j = 0; j < n; j++)
            cin >> ranking[i][j];

    for(int i = 0; i < k; i++)
        for(int j = 0; j < n - 1; j++)
            for(int k = j + 1; k < n; k++)
                count[ranking[i][j] - 1][ranking[i][k] - 1]++;

    int ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(count[i][j] == k) ans++;

    cout << ans;

    return 0;
}