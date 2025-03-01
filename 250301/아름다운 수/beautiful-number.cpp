#include <iostream>
#include <string>

using namespace std;

int n, answer;
string s;

bool is_beautiful() {
    for (int i = 0; i < n;) {
        if (s[i] == '1') i++;
        else if (i < n - 1 && s[i] == '2' && s[i] == s[i + 1]) i += 2;
        else if (i < n - 2 && s[i] == '3' && s[i] == s[i + 1] && s[i + 1] == s[i + 2]) i += 3;
        else if (i < n - 3 && s[i] == '4' && s[i] == s[i + 1] && s[i + 1] == s[i + 2] && s[i + 2] == s[i + 3]) i += 4;
        else return false; 
    }
    
    return true;
}

void f(int digit) {
    if (digit == n) {
        if (is_beautiful()) answer++;
        return;
    }
    
    s += '1';
    f(digit + 1);
    s.pop_back();

    s += '2';
    f(digit + 1);
    s.pop_back();

    s += '3';
    f(digit + 1);
    s.pop_back();

    s += '4';
    f(digit + 1);
    s.pop_back();
}

int main() {
    cin >> n;

    // Please write your code here.
    f(0);

    cout << answer;

    return 0;
}
