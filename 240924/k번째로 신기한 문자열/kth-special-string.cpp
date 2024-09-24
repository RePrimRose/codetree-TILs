#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    string t;
    vector<string> arr;

    cin >> n >> k >> t;

    for(int i = 0; i < n; i++) {
        string str;

        cin >> str;

        if(str.find(t) == 0) {
            arr.push_back(str);
        }
    }

    sort(arr.begin(), arr.end());

    cout << arr[k - 1];

    return 0;
}