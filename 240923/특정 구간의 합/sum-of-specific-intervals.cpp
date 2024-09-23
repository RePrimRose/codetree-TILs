#include <iostream>
using namespace std;

int arr[101];

int sumSubSeq(int a1, int a2) {
    int sum = 0;

    for(int i = a1; i <= a2; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;

    cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < m; i++) {
        int a1, a2;

        cin >> a1 >> a2;

        cout << sumSubSeq(a1, a2) << endl;
    }

    return 0;
}