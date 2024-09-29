#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m1, d1, m2, d2;
    int elapsed_days = 0;
    int m1_days = 0;
    int m2_days = 0;

    cin >> m1 >> d1 >> m2 >> d2;

    for(int i = 1; i < m1; i++) {
        m1_days += num_of_days[i];
    }
    m1_days += d1;

    for(int i = 1; i < m2; i++) {
        m2_days += num_of_days[i];
    }
    m2_days += d2;

    elapsed_days = m2_days - m1_days + 1;

    cout << elapsed_days;

    return 0;
}