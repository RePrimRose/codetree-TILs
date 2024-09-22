#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int eeCnt = 0;
    int ebCnt = 0;

    cin >> str;

    for(int i = 0; i < str.length() - 1; i++) {
        if(str[i] == 'e') {
            if(str[i + 1] == 'e') eeCnt++;
            if(str[i + 1] == 'b') ebCnt++;
        }
    }

    cout << eeCnt << " " << ebCnt;

    return 0;
}