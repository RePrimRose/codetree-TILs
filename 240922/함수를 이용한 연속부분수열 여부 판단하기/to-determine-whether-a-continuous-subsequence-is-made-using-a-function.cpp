#include <iostream>
using namespace std;

bool isSubsequence(int arr1[], int arr2[], int n1, int n2) {
    for(int i = 0; i < n1 - n2; i++) {
        int cnt = 0;
        for(int j = 0; j < n2; j++) {
            if(arr1[i + j] == arr2[j]) cnt++;
        }
        if(cnt == n2) return true;
    }

    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    int arr1[100], arr2[100];

    cin >> n1 >> n2;

    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    if(isSubsequence(arr1, arr2, n1, n2)) cout << "Yes";
    else cout << "No";

    return 0;
}