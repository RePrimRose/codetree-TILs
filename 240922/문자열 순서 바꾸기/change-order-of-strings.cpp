#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s, t;

    cin >> s >> t;

    string tmp = s;
    s = t;
    t = tmp;

    cout << s << endl;
    cout << t;
    
    return 0;
}