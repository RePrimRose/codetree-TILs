#include <iostream>
#include <string>
using namespace std;

#define MAX 10

int n;
pair<int, pair<int, int>> arr[MAX];

int makeThreeDigitNumber(int i, int j, int k) {
    return i * 100 + j * 10 + k;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i].first >> arr[i].second.first >> arr[i].second.second;
    
    int ans = 0;
    for(int i = 1; i <= 9; i++)
        for(int j = 1; j <= 9; j++)
            for(int k = 1; k <= 9; k++) {
                if(i == j || j == k || i == k) continue;
                bool isPossible = true;
                for(int l = 0; l < n; l++) {
                    string numberOne = to_string(arr[l].first);
                    string numberTwo = to_string(makeThreeDigitNumber(i, j, k));
                    int firstCnt = 0, secondCnt = 0;
                    for(int m = 0; m < 3; m++) {
                        if(numberOne[m] == numberTwo[m]) firstCnt++;
                        else if(numberTwo.find(numberOne[m]) != string::npos) secondCnt++;
                    }
                    if(firstCnt != arr[l].second.first || secondCnt != arr[l].second.second) {
                        isPossible = false;
                        break;
                    }
                }
                if(isPossible) ans++;
            }
    
    cout << ans;

    return 0;
}