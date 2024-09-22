#include <iostream>
using namespace std;

bool isVaildDate(int m, int d) {
    if(m > 12) return false;
    if(d > 31) return false;
    if(m == 2 && d > 28) return false;
    if(m == 4 || m == 6 || m == 9 || m == 11) {
        if(d > 30) return false;
    }

    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m, d;

    cin >> m >> d;

    if(isVaildDate(m, d)) cout << "Yes";
    else cout << "No";

    return 0;
}