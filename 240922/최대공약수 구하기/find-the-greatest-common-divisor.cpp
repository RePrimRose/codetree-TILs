#include <iostream>
using namespace std;

int findGCD(int n, int m) {
    int gcd;

    if(m > n) {
        int tmp = n;
        n = m;
        m = tmp;
    }

    for(int i = 1; i <= m; i++) {
        if(n % i == 0 && m % i == 0) gcd = i;
    }

    return gcd;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;

    cin >> n >> m;

    cout << findGCD(n ,m);

    return 0;
}