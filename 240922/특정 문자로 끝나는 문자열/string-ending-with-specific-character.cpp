#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string arr[10];
    bool isEnd = false;
    char c;

    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cin >> c;

    for(int i = 0; i < 10; i++) {
        string str = arr[i];
        int len = str.length();

        if(str[len - 1] == c) {
            cout << str << endl;
            isEnd = true;
        }
    }

    if(!isEnd) cout << "None";

    return 0;
}