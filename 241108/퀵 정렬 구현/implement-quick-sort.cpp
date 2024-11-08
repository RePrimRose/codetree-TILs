#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 100000

int n;
int arr[MAX];

int partition(int low, int high) {
    int mid = (low + high) / 2;
    swap(arr[mid], arr[high]);
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return i + 1;
}

void quick_sort(int low, int high) {
    if(low < high) {
        int pos = partition(low, high);

        quick_sort(low, pos - 1);
        quick_sort(pos + 1, high);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quick_sort(0, n - 1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}