#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<char> tilesColor(2000001, 'N');
    int whiteCnt = 0;
    int blackCnt = 0;
    int n;

    cin >> n;

    int pos = 1000000;
    for(int i = 0; i < n; i++) {
        int x;
        char d;

        cin >> x >> d;

        if(d == 'R') {
            for(int j = pos; j < pos + x; j++) {
                tilesColor[j] = 'B';
            }
            pos += (x - 1);
        } else {
            for(int j = pos; j > pos - x; j--) {
                tilesColor[j] = 'W';
            }
            pos -= (x - 1);
        }
    }

    for(int i = 0; i < 2000001; i++) {
        if(tilesColor[i] == 'W') whiteCnt++;
        else if(tilesColor[i] == 'B') blackCnt++;
    }

    cout << whiteCnt << " " << blackCnt;

    return 0;
}