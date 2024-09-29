#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string binary;
    int num = 0;

    cin >> binary;

    for(int i = 0; i < binary.size(); i++) {
        num = num * 2 + (binary[i] - '0');
    }

    cout << num;

    return 0;
}