#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string arr[10];

    cin >> n;

    string str = "";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        str += arr[i];
    }

    cout << str;

    return 0;
}