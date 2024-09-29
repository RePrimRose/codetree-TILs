#include <iostream>
#include <string>
using namespace std;

int numsOfDays[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int getDays(int m, int d) {
    int days = 0;

    for(int i = 1; i < m; i++) {
        days += numsOfDays[i];
    }

    return days + d;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m1, d1, m2, d2, cnt;
    string weekName;

    cin >> m1 >> d1 >> m2 >> d2 >> weekName;

    int m1Days = getDays(m1, d1);
    int m2Days = getDays(m2, d2);

    if(weekName == "Tue") {
        m1Days += 1;
    } else if(weekName == "Wed") {
        m1Days += 2;
    } else if(weekName == "Thu") {
        m1Days += 3;
    } else if(weekName == "Fri") {
        m1Days += 4;
    } else if(weekName == "Sat") {
        m1Days += 5;
    } else if(weekName == "Sun") {
        m1Days += 6;
    }

    cnt = (m2Days - m1Days) / 7 + 1;

    if(cnt < 0) cout << 0;
    else cout << cnt;

    return 0;
}