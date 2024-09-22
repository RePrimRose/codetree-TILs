#include <iostream>
using namespace std;

bool isMagicNumber(int n) {
    int sum = n / 10 + n % 10;

    return n % 2 == 0 && sum % 5 == 0;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    if(isMagicNumber(n)) cout << "Yes";
    else cout << "No";

    return 0;
}