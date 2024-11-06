#include <iostream>
using namespace std;

#define MAX 100000

int n;
int arr[MAX];
int merged_arr[MAX];

void merge(int low, int mid, int high) {
    int i = low, k = low, j = mid + 1;

    while(i <= mid && j <= high) {
        if(arr[i] <= arr[j]) {
            merged_arr[k] = arr[i];
            k++; i++;
        } else {
            merged_arr[k] = arr[j];
            k++; j++;
        }
    }

    while(i <= mid) {
        merged_arr[k] = arr[i];
        k++; i++;
    }

    while(j <= high) {
        merged_arr[k] = arr[j];
        k++; j++;
    }

    for(k = low; k <= high; k++) {
        arr[k] = merged_arr[k];
    }
}

void merge_sort(int low, int high) {
    if(low < high) {
        int mid = (low + high) / 2;
        merge_sort(low, mid);
        merge_sort(mid + 1, high);
        merge(low, mid, high);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    merge_sort(0, n - 1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}