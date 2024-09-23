#include <iostream>
using namespace std;

int arr[100];

int max(int n) {
    if(n == 0) return arr[n];

    return (arr[n] > max(n - 1)) ? arr[n] : max(n - 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << max(n - 1);

    return 0;
}