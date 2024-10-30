#include <iostream>
#include <vector>
using namespace std;

#define MAX 11

int n;
vector<int> arr[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        int num, pos;
        cin >> num >> pos;
        arr[num].push_back(pos);
    }

    int cnt = 0;
    for(int i = 1; i < MAX; i++) {
        if(arr[i].size() == 0) continue;

        int curr_pos = arr[i][0];
        for(int j = 1; j < arr[i].size(); j++) {
            if(curr_pos != arr[i][j]) cnt++;
            curr_pos = arr[i][j];
        }
    }

    cout << cnt;

    return 0;
}