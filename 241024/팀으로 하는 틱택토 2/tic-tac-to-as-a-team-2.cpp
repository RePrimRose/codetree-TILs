#include <iostream>
#include <string>
using namespace std;

int arr[3][3];
bool isExist[10];

bool canWin(int a, int b) {
    for(int i = 0; i < 3; i++) {
        int a_cnt = 0; int b_cnt = 0;
        for(int j = 0; j < 3; j++) {
            if(arr[i][j] == a) a_cnt++;
            if(arr[i][j] == b) b_cnt++;
        }
        if((a_cnt == 2 && b_cnt == 1) || (b_cnt == 2 && a_cnt == 1)) return true;
    }

    for(int i = 0; i < 3; i++) {
        int a_cnt = 0; int b_cnt = 0;
        for(int j = 0; j < 3; j++) {
            if(arr[j][i] == a) a_cnt++;
            if(arr[j][i] == b) b_cnt++;
        }
        if((a_cnt == 2 && b_cnt == 1) || (b_cnt == 2 && a_cnt == 1)) return true;
    }

    int a_cnt = 0; int b_cnt = 0;
    for(int i = 0; i < 3; i++) {
        if(arr[i][i] == a) a_cnt++;
        if(arr[i][i] == b) b_cnt++;
    }
    if((a_cnt == 2 && b_cnt == 1) || (b_cnt == 2 && a_cnt == 1)) return true;

    a_cnt = 0; b_cnt = 0;
    for(int i = 0; i < 3; i++) {
        if(arr[2 - i][i] == a) a_cnt++;
        if(arr[2 - i][i] == b) b_cnt++;
    }
    if((a_cnt == 2 && b_cnt == 1) || (b_cnt == 2 && a_cnt == 1)) return true;

    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string str;

    for(int i = 0; i < 3; i++) {
        cin >> str;
        for(int j = 0; j < 3; j++) {
            arr[i][j] = str[j] - '0';
            isExist[arr[i][j]] = true;
        }
    }

    int ans = 0;
    for(int i = 1; i < 10; i++) {
        if(!isExist[i]) continue;
        for(int j = i + 1; j < 10; j++) {
            if(!isExist[j]) continue;
            if(canWin(i, j)) ans++;
        }
    }

    cout << ans;

    return 0;
}