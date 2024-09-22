#include <iostream>
using namespace std;

void printSquare(int n) {
    int num = 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << num << " ";
            num += 1;
            if(num == 10) num = 1;
        }
        cout << endl;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    printSquare(n);

    return 0;
}