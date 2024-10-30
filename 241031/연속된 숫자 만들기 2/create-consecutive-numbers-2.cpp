#include <iostream>
#include <cstdlib>
using namespace std;

#define MAX 3

int people[MAX];
bool connect[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 0; i < MAX; i++) {
        cin >> people[i];
    }

    for(int i = 0; i < MAX; i++) {
        for(int j = i + 1; j < MAX; j++) {
            if(abs(people[i] - people[j]) == 1) {
                connect[i] = true;
                connect[j] = true;
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i < MAX; i++) {
        if(connect[i]) cnt++;
    }

    if(cnt == 3) cout << 0;
    else if(cnt == 2) cout << 1;
    else cout << 2;

    return 0;
}