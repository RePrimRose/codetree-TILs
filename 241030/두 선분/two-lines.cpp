#include <iostream>
using namespace std;

int x1, x2, x3, x4;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> x1 >> x2 >> x3 >> x4;

    if(x2 < x3 || x4 < x1) cout << "nonintersecting";
    else cout << "intersecting";

    return 0;
}