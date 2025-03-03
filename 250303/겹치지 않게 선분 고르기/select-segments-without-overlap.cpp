#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

int n, line_count, answer;
int x1[15], x2[15];
vector<pair<int, int>> selected_line;

bool is_overlapped(int l1, int r1) {
    for (int i = 0; i < selected_line.size(); i++) {
        int l2, r2;
        tie(l2, r2) = selected_line[i];

        if ((l2 <= l1 && l1 <= r2) || (l2 <= r1 && r1 <= r2)) return true;
    }

    return false;
}

void f(int pos) {
    if (pos == n) {
        answer = max(answer, line_count);
        return;
    }

    if (!is_overlapped(x1[pos], x2[pos])) {
        selected_line.push_back({x1[pos], x2[pos]});
        line_count++;

        f(pos + 1);

        selected_line.pop_back();
        line_count--;
    }

    f(pos + 1);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    // Please write your code here.
    f(0);

    cout << answer;

    return 0;
}
