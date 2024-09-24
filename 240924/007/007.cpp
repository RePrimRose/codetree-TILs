#include <iostream>
#include <string>
using namespace std;

class Spy {
    public:
        string secretCode;
        char meetingPoint;
        int time;

        Spy(string secretCode, char meetingPoint, int time) {
            this->secretCode = secretCode;
            this->meetingPoint = meetingPoint;
            this->time = time;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    char c;
    int i;

    cin >> str >> c >> i;

    Spy spy = Spy(str, c, i);
    cout << "secret code : " << spy.secretCode << endl;
    cout << "meeting point : " << spy.meetingPoint << endl;
    cout << "time : " << spy.time;

    return 0;
}