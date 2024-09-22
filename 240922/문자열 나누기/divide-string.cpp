#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string arr[10];
    string str = "";

    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        str += arr[i];
    }

    for(int i = 0; i < str.length(); i++) {
        cout << str[i];
        if(i % 5 == 4) cout << endl;
    }

    return 0;
}