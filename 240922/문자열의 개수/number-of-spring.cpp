#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string arr[200];

    int cnt = 0;
    for(int i = 0; i < 200; i++) {
        cin >> arr[i];

        if(arr[i] == "0") break;

        cnt++;
    }

    cout << cnt << endl;
    
    for(int i = 0; i < cnt; i += 2) {
        cout << arr[i] << endl;
    }

    return 0;
}