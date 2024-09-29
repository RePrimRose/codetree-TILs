#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

class Information{
    public:
        string name;
        int height;
        double weight;
        Information(string name = "", int height = 0, double weight = 0.0) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
};

bool cmpByName(Information a, Information b) {
    return a.name < b.name;
}

bool cmpByHeight(Information a, Information b) {
    return a.height > b.height;
}

int main() {
    // 여기에 코드를 작성해주세요.
    Information information[5];

    for(int i = 0; i < 5; i++) {
        string name;
        int height;
        double weight;

        cin >> name >> height >> weight;

        information[i].name = name;
        information[i].height = height;
        information[i].weight = weight;
    }

    cout << fixed << setprecision(1);

    sort(information, information + 5, cmpByName);

    cout << "name" << endl;
    for(int i = 0; i < 5; i++) {
        cout << information[i].name << " " << information[i].height << " " << information[i].weight << endl;
    }
    cout << endl;

    sort(information, information + 5, cmpByHeight);

    cout << "height" << endl;
    for(int i = 0; i < 5; i++) {
        cout << information[i].name << " " << information[i].height << " " << information[i].weight << endl;
    }

    return 0;
}