#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int sum = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int num;

        cin >> num;

        sum += num;
    }

    string str = to_string(sum);

    cout << str.substr(1, str.length() - 1) << str.substr(0, 1);

    return 0;
}