#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int q;

    cin >> str >> q;

    for(int i = 0; i < q; i++) {
        int n;

        cin >> n;

        if(n == 1) str = str.substr(1, str.length() - 1) + str.substr(0, 1);
        else if(n == 2) str = str.substr(str.length() - 1, 1) + str.substr(0, str.length() - 1);
        else {
            string tmp = "";
            for(int j = str.length() - 1; j >= 0; j--) {
                tmp += str[j];
            }

            str = tmp;
        }

        cout << str << endl;
    }

    return 0;
}