#include <iostream>
#include <string>
using namespace std;

string str;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> str;

    int ans = 0;
    for(int i = 0; i < str.size(); i++) {
        for(int j = i + 1; j < str.size(); j++) {
            if(str[i] == '(' && str[i + 1] == '(' && str[j] == ')' && str[j + 1] == ')') ans++;
        }
    }

    cout << ans;

    return 0;
}