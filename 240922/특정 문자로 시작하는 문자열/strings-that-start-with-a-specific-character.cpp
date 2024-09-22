#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string arr[20];
    char c;

    cin >> n;

    for(int i = 0 ; i < n; i++) {
        cin >> arr[i];
    }

    cin >> c;

    int cnt = 0;
    double aver = 0.0;
    for(int i = 0; i < n; i++) {
        string str = arr[i];

        if(str[0] == c) {
            cnt++;
            aver += str.length();
        }
    }

    aver /= cnt;

    cout << fixed << setprecision(2) << cnt << " " << aver;

    return 0;
}