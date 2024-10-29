#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX 15

vector<int> arr;

vector<int> make_arr(int a, int b, int c, int d) {
    vector<int> new_arr;

    new_arr.push_back(a + b + c + d);
    new_arr.push_back(a + b + c);
    new_arr.push_back(a + b + d);
    new_arr.push_back(a + c + d);
    new_arr.push_back(b + c + d);
    new_arr.push_back(a + b);
    new_arr.push_back(a + d);
    new_arr.push_back(b + d);
    new_arr.push_back(a + c);
    new_arr.push_back(c + d);
    new_arr.push_back(b + c);
    new_arr.push_back(a);
    new_arr.push_back(b);
    new_arr.push_back(c);
    new_arr.push_back(d);
    sort(new_arr.begin(), new_arr.end());

    return new_arr;
}

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 0; i < MAX; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());

    bool isFind = false;
    for(int i = 0; i < MAX; i++) {
        for(int j = i + 1; j < MAX; j++) {
            for(int k = j + 1; k < MAX; k++) {
                for(int l = k + 1; l < MAX; l++) {
                    vector<int> temp = make_arr(arr[i], arr[j], arr[k], arr[l]);
                    if(arr == temp) {
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