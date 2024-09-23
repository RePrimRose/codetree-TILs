#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;
int k;

void print() {
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void f(int n) {
    if(n == 0) {
        print();
        return;
    }

    for(int i = 1; i <= k; i++) {
        arr.push_back(i);
        f(n - 1);
        arr.pop_back();
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> k >> n;

    f(n);

    return 0;
}