#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str, order;

    cin >> str >> order;

    for(int i = 0; i < order.length(); i++) {
        if(order[i] == 'L') str = str.substr(1, str.length() - 1) + str.substr(0, 1);
        else str = str.substr(str.length() - 1, 1) + str.substr(0, str.length() - 1);
    }

    cout << str;

    return 0;
}