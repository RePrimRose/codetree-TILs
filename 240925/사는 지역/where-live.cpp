#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class People{
    public:
        string name;
        string address;
        string area;
        People(string name = "", string address = "", string area = "") {
            this->name = name;
            this->address = address;
            this->area = area;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    People people[10];
    string str[10];

    cin >> n;

    for(int i = 0; i < n; i++) {
        string name, address, area;

        cin >> name >> address >> area;

        people[i].name = name;
        people[i].address = address;
        people[i].area = area;
        str[i] = name;
    }

    sort(str, str + n);

    for(int i = 0; i < n; i++) {
        if(str[n - 1] == people[i].name) {
            cout << "name " << people[i].name << endl;
            cout << "addr " << people[i].address << endl;
            cout << "city " << people[i].area;
        }
    }
    
    return 0;
}