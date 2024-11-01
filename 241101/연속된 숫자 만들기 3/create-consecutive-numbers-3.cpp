#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 3

int people[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 0; i < MAX; i++) {
        cin >> people[i];
    }

    sort(people, people + MAX);

    int ans = 0;
    int first = people[0], second = people[1], third = people[2];

    if(second - 1 > first && third - second < second - first) {
        ans = second - first - 1;
    } else if(second + 1 < third) {
        ans = third - second - 1;
    }

    cout << ans;

    return 0;
}