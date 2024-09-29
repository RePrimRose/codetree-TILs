#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class People{
    public:
        string name;
        int height;
        int weight;
        People(string name = "", int height = 0, int weight = 0) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
};

bool cmp(People a, People b) {
    if(a.height == b.height) {
        return a.weight > b.weight;
    }
    return a.height < b.height;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    People people[10];

    cin >> n;

    for(int i = 0; i < n; i++) {
        string name;
        int height, weight;

        cin >> name >> height >> weight;

        people[i].name = name;
        people[i].height = height;
        people[i].weight = weight;
    }

    sort(people, people + n, cmp);

    for(int i = 0; i < n; i++) {
        cout << people[i].name << " ";
        cout << people[i].height << " ";
        cout << people[i].weight << endl;
    }

    return 0;
}