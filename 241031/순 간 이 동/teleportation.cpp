#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int A, B, x, y;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> A >> B >> x >> y;

    cout << min(abs(B - A), min(abs(x - A) + abs(B - y), (abs(y - A) + abs(B - x))));

    return 0;
}