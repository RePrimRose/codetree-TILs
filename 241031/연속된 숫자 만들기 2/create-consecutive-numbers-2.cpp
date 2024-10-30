#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

#define MAX 3

int people[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 0; i < MAX; i++) {
        cin >> people[i];
    }

    sort(people, people + MAX);

    if(people[2] - people[1] == 1 && people[1] - people[0] == 1) cout << 0;
    else if(people[2] - people[1] > 2 && people[1] - people[0] > 2) cout << 2;
    else cout << 1;


    return 0;
}