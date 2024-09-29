#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

class Point{
    public:
        int x, y, number;
        Point(int x = 0, int y = 0, int number = 0) {
            this->x = x;
            this->y = y;
            this->number = number;
        }
};

bool cmp(Point a, Point b) {
    if(abs(a.x) + abs(a.y) == abs(b.x) + abs(b.y)) {
        return a.number < b.number;
    }
    return abs(a.x) + abs(a.y) < abs(b.x) + abs(b.y);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    Point point[1000];

    cin >> n;

    for(int i = 0; i < n; i++) {
        int x, y;

        cin >> x >> y;

        point[i].x = x;
        point[i].y = y;
        point[i].number = i + 1;
    }

    sort(point, point + n, cmp);

    for(int i = 0; i < n; i++) {
        cout << point[i].number << endl;
    }

    return 0;
}