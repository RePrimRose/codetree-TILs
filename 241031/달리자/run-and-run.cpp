#include <iostream>
using namespace std;

#define MAX 100

int n;
int A[MAX], B[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> B[i];
    }

    int ans = 0;
    for(int i = 0; i < n - 1; i++) {
        ans += A[i] - B[i];
        A[i + 1] += A[i] - B[i];
    }

    cout << ans;

    return 0;
}