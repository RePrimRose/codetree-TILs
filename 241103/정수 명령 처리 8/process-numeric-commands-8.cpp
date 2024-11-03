#include <iostream>
#include <string>
#include <list>
using namespace std;

list<int> l;
int n;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        string order;
        cin >> order;

        if(order == "push_front") {
            int num;
            cin >> num;
            l.push_front(num);
        } else if(order == "push_back") {
            int num;
            cin >> num;
            l.push_back(num);
        } else if(order == "pop_front") {
            cout << l.front() << endl;
            l.pop_front();
        } else if(order == "pop_back") {
            cout << l.back() << endl;
            l.pop_back();
        } else if(order == "size") {
            cout << l.size() << endl;
        } else if(order == "empty") {
            cout << l.empty() << endl;
        } else if(order == "front") {
            cout << l.front() << endl; 
        } else if(order == "back") {
            cout << l.back() << endl;
        }
    }

    return 0;
}