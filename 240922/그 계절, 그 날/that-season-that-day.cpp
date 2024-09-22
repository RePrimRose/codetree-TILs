#include <iostream>
#include <string>
using namespace std;

bool isLeapYear(int y) {
    if(y % 4 != 0) return false;
    if(y % 100 == 0 && y % 400 != 0) return false;

    return true;
}

bool isVaildDate(int y, int m, int d) {
    if(m > 12) return false;
    if(d > 31) return false;
    if(m == 2 && d > 28 && !isLeapYear(y)) return false;
    if(m == 4 || m == 6 || m == 9 || m == 11) {
        if(d > 30) return false;
    }

    return true;
}

string getSeason(int m) {
    if(m < 3 || m == 12) return "Winter";
    else if(m < 6) return "Spring";
    else if(m < 9) return "Summer";
    else return "Fall";
}

int main() {
    // 여기에 코드를 작성해주세요.
    int y, m, d;

    cin >> y >> m >> d;

    if(isVaildDate(y, m, d)) cout << getSeason(m);
    else cout << -1;

    return 0;
}