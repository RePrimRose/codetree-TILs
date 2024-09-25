#include <iostream>
#include <string>
using namespace std;

class Goods{
    public:
        string name;
        int code;
        Goods(string name, int code) {
            this->name = name;
            this->code = code;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string name;
    int code;

    cin >> name >> code;

    Goods goods1 = Goods("codetree", 50);
    Goods goods2 = Goods(name, code);

    cout << "product " << goods1.code << " is " << goods1.name << endl;
    cout << "product " << goods2.code << " is " << goods2.name;

    return 0;
}