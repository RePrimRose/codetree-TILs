#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<pair<int, int>> tiles(2000001, {0, 0});
    vector<char> tilesColor(2000001, 'N');
    int whiteCnt = 0;
    int blackCnt = 0;
    int grayCnt = 0;
    int n;

    cin >> n;

    int pos = 1000000;
    for(int i = 0; i < n; i++) {
        int x;
        char d;

        cin >> x >> d;

        if(d == 'R') {
            for(int j = pos; j < pos + x; j++) {
                tiles[j].second++;
                tilesColor[j] = 'B';
            }
            pos += (x - 1);
        } else {
            for(int j = pos; j > pos - x; j--) {
                tiles[j].first++;
                tilesColor[j] = 'W';
            }
            pos -= (x - 1);
        }
    }

    for(int i = 0; i < 2000001; i++) {
        if(tiles[i].first > 1 && tiles[i].second > 1) tilesColor[i] = 'G';
        if(tilesColor[i] == 'W') whiteCnt++;
        else if(tilesColor[i] == 'B') blackCnt++;
        else if(tilesColor[i] == 'G') grayCnt++;
    }

    cout << whiteCnt << " " << blackCnt << " " << grayCnt;

    return 0;
}