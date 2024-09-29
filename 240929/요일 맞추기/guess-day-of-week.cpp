#include <iostream>
#include <string>
using namespace std;

int numsOfDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string weekName[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int getDays(int m, int d) {
    int days = 0;

    for(int i = 1; i < m; i++) {
        days += numsOfDays[i];
    }

    return days + d;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m1, d1, m2, d2, elapsedDays;

    cin >> m1 >> d1 >> m2 >> d2;

    int m1Days = getDays(m1, d1);
    int m2Days = getDays(m2, d2);

    if(m1Days == m2Days) {
        cout << "Mon";
    } else if(m1Days > m2Days) {
        elapsedDays = 7 - ((m1Days - m2Days) % 7);
        cout << weekName[elapsedDays];
    } else {
        elapsedDays = (m2Days - m1Days) % 7;
        cout << weekName[elapsedDays];
    }

    return 0;
}