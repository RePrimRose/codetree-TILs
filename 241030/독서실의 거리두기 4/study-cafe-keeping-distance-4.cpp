#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;

int n;
string str;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> str;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == '1') continue;

        string seat = str;
        seat[i] = '1';

        for (int j = i + 1; j < n; j++) {
            if (str[j] == '1') continue;

            string seat_copy = seat;
            seat_copy[j] = '1';

            int distance = 0;
            int min_distance = INT_MAX;
            int seat_count = 0;

            for (int k = 0; k < n; k++) {
                seat_count += seat_copy[k] - '0';

                if (seat_count == 1) distance++;
                if (seat_count == 2) {
                    min_distance = min(min_distance, distance);
                    distance = 1;
                    seat_count = 1;
                }
            }
            ans = max(ans, min_distance);
        }
    }

    cout << ans;

    return 0;
}