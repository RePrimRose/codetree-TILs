#include <iostream>
#include <string>
#include <list>

using namespace std;

list<char> l;
int n, m;
string s;

int main() {
    cin >> n >> m;
    cin >> s;

    for (int i = 0; i < n; i++) {
        l.push_back(s[i]);
    }

    list<char>::iterator it;
    it = l.end();

    for (int i = 0; i < m; i++) {
        char command;
        cin >> command;
        if (command == 'P') {
            char c;
            cin >> c;
            l.insert(it, c);
        } else if (command == 'L') {
            if(it != l.begin()) 
                it--;
        } else if (command == 'R') {
            if(it != l.end())
                it++;
        } else if (command == 'D') {
            if(it != l.end())
                it = l.erase(it);
        }
    }

    for (it = l.begin(); it != l.end(); it++) {
        cout << *it;
    }

    return 0;
}
