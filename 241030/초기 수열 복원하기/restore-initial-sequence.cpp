#include <iostream>
#include <cstdlib>
using namespace std;

#define MAX 2001

int n;
int arr[MAX];

bool isPossible(int a) {
    bool isUsed[MAX] = {};
    isUsed[a] = true;

    int curr_num = a;
    for(int i = 0; i < n - 1; i++) {
        curr_num = abs(arr[i] - curr_num);
        if(isUsed[curr_num] || curr_num == 0) return false;
        else isUsed[curr_num] = true;
    }

    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    for(int i = 1; i < arr[0]; i++) {
        if(isPossible(i)) {
            int curr_num = i;
            cout << curr_num << " ";
            for(int i = 0; i < n - 1; i++) {
                curr_num = abs(arr[i] - curr_num);
                cout << curr_num << " ";
            }
            break;
        }
    }

    return 0;
}