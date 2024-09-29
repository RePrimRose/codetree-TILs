#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public:
        int h, w, number;
        Student(int h = 0, int w = 0, int number = 0) {
            this->h = h;
            this->w = w;
            this->number = number;
        }
};

bool cmp(Student a, Student b) {
    if(a.h == b.h) {
        return a.w > b.w;
    }
    return a.h < b.h;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    Student student[1000];

    cin >> n;

    for(int i = 0; i < n; i++) {
        int h, w;

        cin >> h >> w;

        student[i].h = h;
        student[i].w = w;
        student[i].number = i + 1;
    }

    sort(student, student + n, cmp);

    for(int i = 0; i < n; i++) {
        cout << student[i].h << " ";
        cout << student[i].w << " ";
        cout << student[i].number << endl;
    }

    return 0;
}