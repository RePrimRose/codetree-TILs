#include <iostream>
#include <algorithm>
using namespace std;

int findLCM(int n, int m) {
    int gcd;

    for(int i = 1; i <= min(n, m); i++) {
        if(n % i == 0 && m % i == 0) gcd = i;
    }

    return gcd * (n / gcd) * (m / gcd);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;

    cin >> n >> m;

    cout << findLCM(n, m);

    return 0;
}