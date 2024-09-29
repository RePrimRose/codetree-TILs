#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    int startMin = 11 * 1440 + 11 * 60 + 11;

    cin >> a >> b >> c;

    int endMin = a * 1440 + b * 60 + c;

    int elapsedMin = endMin - startMin;

    if(elapsedMin < 0) cout << -1;
    else cout << elapsedMin;

    return 0;
}