#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char c1, c2;

    cin >> c1 >> c2;

    cout << (int) c1 + c2 << " ";

    if(c1 > c2) cout << (int) c1 - c2;
    else cout << (int) c2 - c1;

    return 0;
}