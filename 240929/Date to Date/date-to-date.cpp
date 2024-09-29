#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m1, d1, m2, d2;
    int elapsed_days = 0;

    cin >> m1 >> d1 >> m2 >> d2;

    elapsed_days = num_of_days[m1] - d1 + 1;
    for(int i = m1 + 1; i < m2; i++) {
        elapsed_days += num_of_days[i];
    }
    elapsed_days += d2;

    cout << elapsed_days;

    return 0;
}