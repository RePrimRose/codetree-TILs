#include <iostream>
#include <string>
using namespace std;

void printString(int n) {
    if(n == 0) return;

    printString(n - 1);

    cout << "HelloWorld" << endl;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    printString(n);

    return 0;
}