#include <iostream>
#include <vector>
using namespace std;

#define MAX 100000

int n;
vector<int> arr;

void radix_sort() {
    for(int pos = 1; pos <= MAX; pos *= 10) {
        vector<int> new_arr[10];

        for(int i = 0; i < n; i++) {
            new_arr[arr[i] / pos % 10].push_back(arr[i]);
        }

        vector<int> store_arr;
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < new_arr[i].size(); j++) {
                store_arr.push_back(new_arr[i][j]);
            }
        }

        arr = store_arr;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        int num; cin >> num;
        arr.push_back(num);
    }

    radix_sort();

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}