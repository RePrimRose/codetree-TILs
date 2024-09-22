#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string str;

    cin >> n;

    int lenSum = 0;
    int aCnt = 0;
    for(int i = 0; i < n; i++) {
        cin >> str;
        lenSum += str.length();
        if(str[0] == 'a') aCnt++;
    }

    cout << lenSum << " " << aCnt;

    return 0;
}