#include <iostream>
using namespace std;

#define MAX 100

int n, l;
int arr[MAX];

bool isPossible(int max_score) {
    int l_cnt = l;
    int matched_cnt = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] >= max_score) matched_cnt++;
        else if(arr[i] + 1 >= max_score) {
            if(l_cnt == 0) continue;
            matched_cnt++;
            l_cnt--;
        }
    }

    if(matched_cnt >= max_score) return true;

    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> l;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = 0;
    for(int i = 0; i <= MAX; i++) {
        if(isPossible(i)) ans = i;
    }

    cout << ans;

    return 0;
}