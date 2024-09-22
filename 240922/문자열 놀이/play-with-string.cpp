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

        if(n == 1) {
            int a, b;

            cin >> a >> b;

            char tmp = str[a - 1];
            str[a - 1] = str[b - 1];
            str[b - 1] = tmp;

            cout << str << endl;
        } else {
            char a, b;
            
            cin >> a >> b;

            for(int j = 0; j < str.length(); j++) {
                if(str[j] == a) str[j] = b;
            }

            cout << str << endl;
        }
    }

    return 0;
}