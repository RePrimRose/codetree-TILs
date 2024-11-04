#include <iostream>
using namespace std;

#define MAX 100

int n;
int arr[MAX];

void Selection_sort() {
    for(int i = 0; i < n - 1; i++) {
        int min = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min]) min = j;
        }

        int tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Selection_sort();

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}