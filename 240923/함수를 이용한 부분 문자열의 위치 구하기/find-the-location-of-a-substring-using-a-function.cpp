#include <iostream>
#include <string>
using namespace std;

string str, subStr;

int findSubStr() {
    for(int i = 0; i <= str.size() - subStr.size(); i++) {
        int cnt = 0;
        for(int j = 0; j < subStr.size(); j++) {
            if(str[i + j] == subStr[j]) cnt++;
        }
        if(cnt == subStr.size()) return i;
    }

    return -1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> str >> subStr;

    cout << findSubStr();

    return 0;
}