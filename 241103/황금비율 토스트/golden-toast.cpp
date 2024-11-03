#include <iostream>
#include <string>
#include <list>
using namespace std;

list<char> l;
string str;
int n, m;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m >> str;

    for (int i = 0; i < n; i++) {
        l.push_back(str[i]);
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