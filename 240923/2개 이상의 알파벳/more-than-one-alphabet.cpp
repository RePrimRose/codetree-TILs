#include <iostream>
#include <string>
using namespace std;

bool containsAtLeastTwoLetters(string &str, bool isUsed[]) {
    for(int i = 0; i < str.size(); i++) {
        isUsed[str[i] - 'a'] = true;
    }

    int sum = 0;
    for(int i = 0; i < 26; i++) {
        if(isUsed[i]) sum++;
    }

    return sum > 0;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    bool isUsed[26] = { false };

    cin >> str;

    if(containsAtLeastTwoLetters(str, isUsed)) cout << "Yes";
    else cout << "No";

    return 0;
}