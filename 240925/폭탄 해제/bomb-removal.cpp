#include <iostream>
#include <string>
using namespace std;

class Bomb{
    public:
        string code;
        char color;
        int second;
        Bomb(string code, char color, int second) {
            this->code = code;
            this->color = color;
            this->second = second;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string code;
    char color;
    int second;

    cin >> code >> color >> second;

    cout << "code : " << code << endl;
    cout << "color : " << color << endl;
    cout << "second : " << second;

    return 0;
}