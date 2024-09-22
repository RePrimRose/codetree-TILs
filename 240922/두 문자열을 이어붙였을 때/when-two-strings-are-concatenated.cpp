#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A, B;

    cin >> A >> B;

    if(A + B == B + A) cout << "true";
    else cout << "false";

    return 0;
}