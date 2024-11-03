#include <iostream>
#include <list>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    list<char> l;
    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        l.push_back(c);
    }

    list<char>::iterator it = l.end();
    for (int i = 0; i < m; i++) {
        char order;
        cin >> order;

        if (order == 'L') {
            if (it == l.begin()) continue;
            it--;
        }
        else if (order == 'R') {
            if (it == l.end()) continue;
            it++;
        }
        else if (order == 'D') {
            l.erase(it);
        }
        else {
            char c;
            cin >> c;
            l.insert(it, c);
        }
    }

    for (it = l.begin(); it != l.end(); it++) {
        cout << *it;
    }

    return 0;
}