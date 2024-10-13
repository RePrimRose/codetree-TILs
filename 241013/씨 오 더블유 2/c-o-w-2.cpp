#include <iostream>
#include <string>
using namespace std;

int n;
string str;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> str;

    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                if(str[i] == 'C' && str[j] == 'O' && str[k] == 'W') ans++;
            }
        }
    }

    cout << ans;

    return 0;
}