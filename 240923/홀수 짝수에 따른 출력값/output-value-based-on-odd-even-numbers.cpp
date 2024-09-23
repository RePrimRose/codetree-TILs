#include <iostream>
using namespace std;

int sum(int n) {
    if(n < 3) return n;

    return sum(n - 2) + n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    cout << sum(n);

    return 0;
}