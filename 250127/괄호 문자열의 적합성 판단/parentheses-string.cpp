#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

bool isRight() {
    stack<char> s;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(') {
            s.push('(');
        } else {
            if(s.empty() == true) {
                return false;
            }
            s.pop();
        }
    }

    if(s.empty() == false) return false;

    return true;
}

int main() {
    cin >> str;

    // Write your code here!

    if(isRight() == true) cout << "Yes";
    else cout << "No";

    return 0;
}
