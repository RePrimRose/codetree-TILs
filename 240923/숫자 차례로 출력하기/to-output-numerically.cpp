#include <iostream>
using namespace std;

void printForward(int n) {
    if(n == 0) return;
    printForward(n - 1);
    cout << n << " ";
}

void printReverse(int n) {
    if(n == 0) return;
    cout << n << " ";
    printReverse(n - 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    printForward(n);
    cout << endl;
    printReverse(n);

    return 0;
}