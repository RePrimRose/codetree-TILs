#include <iostream>
using namespace std;

int pow(int a, int b) {
    int n = 1;

    for(int i = 0; i < b; i++) {
        n *= a;
    }

    return n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;

    cin >> a >> b;

    cout << pow(a, b);

    return 0;
}