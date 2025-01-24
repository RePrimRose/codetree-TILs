#include <iostream>
#include <vector>

using namespace std;

int N;
string command[10000];
int value[10000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> value[i];
        }
    }

    // Write your code here!
    vector<int> arr;

    for (int i = 0; i < N; i++) {
        if (command[i] == "push") {
            arr.push_back(value[i]);
        } else if (command[i] == "pop") {
            cout << arr.back() << endl;
            arr.pop_back();
        } else if (command[i] == "size") {
            cout << arr.size() << endl;
        } else if (command[i] == "empty") {
            cout << arr.empty() << endl;
        } else {
            cout << arr.back() << endl;
        }
    }

    return 0;
}
