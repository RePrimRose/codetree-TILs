#include <algorithm>
#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

#define MAX 15

int n, m, answer = MAX + 1;
int a[MAX], b[MAX];
int initial_result[MAX + 1], result[MAX + 1];

vector<pair<int, int>> ladder[MAX + 1];

bool compare(pair<int, int>& a, pair<int, int>& b) {
    return a.second < b.second;
}

int ghost_leg(int pos, int height) {
    while (true) {
        bool moved = false;
        for (const auto& rope : ladder[pos]) {
            int next_pos, next_height;
            tie(next_pos, next_height) = rope;

            if (next_height > height) {
                pos = next_pos;
                height = next_height;
                moved = true;
                break;
            }
        }
        if (!moved) break;
    }

    return pos;
}

void find_min_ladder(int pos) {
    if (pos == m) {
        for (auto& l : ladder) sort(l.begin(), l.end(), compare);
        for (int i = 1; i <= n; i++) result[i] = ghost_leg(i, 0);
        for (int i = 1; i <= n; i++) if (initial_result[i] != result[i]) return;

        int sum = 0;
        for (int i = 1; i <= n; i++) sum += ladder[i].size();
        answer = min(answer, sum / 2);

        return;
    }

    int x1 = a[pos]; int x2 = a[pos] + 1;
    int height = b[pos];

    ladder[x1].push_back({ x2, height });
    ladder[x2].push_back({ x1, height });

    find_min_ladder(pos + 1);

    ladder[x1].pop_back();
    ladder[x2].pop_back();

    find_min_ladder(pos + 1);
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];

        int x1 = a[i]; int x2 = a[i] + 1;
        int height = b[i];

        ladder[x1].push_back({ x2, height });
        ladder[x2].push_back({ x1, height });
    }

    for (auto& l : ladder) sort(l.begin(), l.end(), compare);
    for (int i = 1; i <= n; i++) initial_result[i] = ghost_leg(i, 0);
    fill(ladder, ladder + MAX + 1, std::vector<std::pair<int, int>>());

    find_min_ladder(0);

    cout << answer;

    return 0;
}
