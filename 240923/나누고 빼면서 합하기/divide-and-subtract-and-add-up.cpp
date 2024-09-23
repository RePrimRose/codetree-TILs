#include <iostream>
using namespace std;

int arr[100];
int n, m;

int sum() {
    int s = arr[0];
    
    while(m > 1) {
        s += arr[m - 1];
        if(m % 2 == 0) m /= 2;
        else m--;
    }

    return s;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << sum();

    return 0;
}