#include <iostream>
using namespace std;

bool isSign(char c) {
    return c == '+' || c == '-' || c == '/' || c == '*';
}

int cal(int a, int b, char c) {
    if(c == '+') return a + b;
    if(c == '-') return a - b;
    if(c == '/') return a / b;
    if(c == '*') return a * b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    char symbol;

    cin >> a >> symbol >> b;

    if(!isSign(symbol)) cout << "False";
    else {
        cout << a << " " << symbol << " " << b << " = " << cal(a, b, symbol);
    }

    return 0;
}