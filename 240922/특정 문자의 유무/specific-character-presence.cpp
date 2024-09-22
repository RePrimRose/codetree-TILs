#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;

    cin >> str;

    if(str.find("ee") != string::npos) cout << "Yes ";
    else cout << "No ";

    if(str.find("ab") != string::npos) cout << "Yes";
    else cout << "No";

    return 0;
}