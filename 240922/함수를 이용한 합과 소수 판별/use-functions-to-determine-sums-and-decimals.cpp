#include <iostream>
using namespace std;

bool isPrime(int n) {
    if(n == 1) return false;

    for(int i = 2; i < n; i++) {
        if(n % i == 0) return false;
    }

    return true;
}

bool isEvenSum(int n) {
    int sum = 0;

    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum % 2 == 0;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;

    cin >> a >> b;

    int cnt = 0;
    for(int i = a; i <= b; i++) {
        if(isPrime(i) && isEvenSum(i)) cnt++;
    }

    cout << cnt;

    return 0;
}