#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;

string str;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> str;

    int max_val = INT_MIN;
    for(int i = 0; i < str.size(); i++) {
        string temp = str;
        if(temp[i] == '0') temp[i] = '1';
        else temp[i] = '0';
        int num = temp[0] - '0';
        for(int j = 1; j < temp.size(); j++) {
            num = num * 2 + (temp[j] - '0');
        }
        max_val = max(max_val, num);
    }

    cout << max_val;

    return 0;
}