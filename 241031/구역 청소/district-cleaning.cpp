#include <iostream>
#include <algorithm>
using namespace std;

int a, b, c, d;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> a >> b >> c >> d;

    cout << max(b, d) - min(a, c);

    return 0;
}