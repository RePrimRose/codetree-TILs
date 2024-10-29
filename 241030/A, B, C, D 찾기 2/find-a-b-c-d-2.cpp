#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 15

int arr[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 0; i < MAX; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + MAX);

    bool isFind = false;
    for(int i = 0; i < MAX; i++) {
        for(int j = i + 1; j < MAX; j++) {
            for(int k = j + 1; k < MAX; k++) {
                for(int l = k + 1; l < MAX; l++) {
                    if(arr[i] + arr[j] + arr[k] + arr[l] == arr[MAX - 1]) {
                        cout << arr[i] << " " << arr[j] << " " << arr[k] << " " << arr[l];
                        isFind = true;
                    }
                    if(isFind) break;
                }
                if(isFind) break;
            }
            if(isFind) break;
        }
        if(isFind) break;
    }

    return 0;
}