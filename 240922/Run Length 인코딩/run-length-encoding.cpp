#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1;
    string str2 = "";

    cin >> str1;

    char c = str1[0];
    int cnt = 1;
    for(int i = 1; i < str1.length(); i++) {
        if(c == str1[i]) cnt++;
        else {
            str2 += c + to_string(cnt);
            cnt = 1;
            c = str1[i];
        }
    }
    str2 += c + to_string(cnt);

    cout << str2.length() << endl << str2;

    return 0;
}