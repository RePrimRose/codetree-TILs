#include <iostream>
using namespace std;

int n;
int arr[100];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int sum = 0;
            for(int k = i; k <= j; k++) {
                sum += arr[k];
            }
            double aver = (double)sum / (double)(j - i + 1);
            for(int k = i; k <= j; k++) {
                if(arr[k] == aver) {
                    ans++;
                    break;
                }
            }
        }
    }

    cout << ans;

    return 0;
}