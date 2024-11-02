#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> arr;
int n;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        string order;
        int number;
        cin >> order;

        if(order == "push_back") {
            cin >> number;
            arr.push_back(number);
        }

        if(order == "pop_back") {
            arr.pop_back();
        }

        if(order == "size") {
            cout << arr.size() << endl;
        }

        if(order == "get") {
            cin >> number;
            cout << arr[number - 1] << endl;
        }
    }

    return 0;
}