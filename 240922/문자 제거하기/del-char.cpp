#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;

    cin >> str;

    while(true) {
        int n;

        cin >> n;

        if(n > str.length()) str.erase(str.length() - 1, 1);
        else str.erase(n, 1);

        cout << str << endl;

        if(str.length() == 1) break;
    }

    return 0;
}