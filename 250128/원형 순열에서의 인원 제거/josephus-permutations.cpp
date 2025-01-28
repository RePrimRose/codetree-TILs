#include <iostream>
#include <queue>

using namespace std;

queue<int> q;
int N, K;

int main() {
    cin >> N >> K;

    // Write your code here!
    for(int i = 1; i <= N; i++)
        q.push(i);

    while(!q.empty()) {
        for(int i = 1; i < K; i++) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
