#include <iostream>
using namespace std;

#define MAX 100

int n, m, p;
int u[MAX];
char c[MAX];
bool people[26];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m >> p;

    for(int i = 0; i < m; i++) {
        cin >> c[i] >> u[i];
    }

    if(u[p - 1] == 0) {
        for(int i = 0; i < n; i++) {
            people[i] = true;
        }
    } else {
        int target_u = u[p - 1];
        for(int i = p - 1; i >= 0; i--) {
            if(u[i] == target_u) people[c[i] - 'A'] = true;
        }

        for(int i = p - 1; i < n; i++) {
            people[c[i] - 'A'] = true;
        }
    }

    for(int i = 0; i < n; i++) {
        if(people[i] == false) cout << (char)(i + 'A') << " ";
    }

    return 0;
}