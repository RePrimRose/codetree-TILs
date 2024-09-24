#include <iostream>
#include <algorithm>
using namespace std;

int arr[10];

int lcm(int a, int b) {
    int gcd;
    
    for(int i = 1; i <= min(a, b); i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    return a * b / gcd;
}

int f(int n, int l) {
    if(n == 0) return l;

    return f(n - 1, lcm(l, arr[n - 1]));
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << f(n, arr[n - 1]);

    return 0;
}