#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];

class Seq{
    public:
        int num;
        int pos;
        Seq(int num = 0, int pos = 0) {
            this->num = num;
            this->pos = pos;
        }
};

bool cmp(Seq a, Seq b) {
    return a.num < b.num;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    Seq seq[1000];

    cin >> n;

    for(int i = 0; i < n; i++) {
        int num;

        cin >> num;

        seq[i].num = num;
        seq[i].pos = i + 1;
    }

    sort(seq, seq + n, cmp);

    for(int i = 0; i < n; i++) {
        arr[seq[i].pos] = i + 1;
    }

    for(int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}