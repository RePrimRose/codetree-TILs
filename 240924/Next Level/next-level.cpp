#include <iostream>
#include <string>
using namespace std;

class User{
    public:
        string id;
        int level;

        User(string id = "codetree", int level = 10) {
            this->id = id;
            this->level = level;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string id;
    int level;

    cin >> id >> level;

    User user1 = User();
    User user2 = User(id, level);

    cout << "user " << user1.id << " lv " << user1.level << endl;
    cout << "user " << user2.id << " lv " << user2.level;

    return 0;
}