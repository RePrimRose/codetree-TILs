#include <iostream>
#include <vector>

using namespace std;

int n, m;
int from[10000], to[10000];
vector<int> g[1001];
bool is_visited[1001];
int answer;

void dfs(int n) {
    if(is_visited[n]) return;

    is_visited[n] = true;
    answer++;

    for (int i = 0; i < g[n].size(); i++) {
        dfs(g[n][i]);
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> from[i] >> to[i];
    }

    // Write your code here!
    for (int i = 0; i < m; i++) {
        g[from[i]].push_back(to[i]);
        g[to[i]].push_back(from[i]);
    }

    dfs(1);

    cout << answer - 1;

    return 0;
}
