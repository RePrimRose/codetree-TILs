#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Student{
    public:
        string name;
        int korean;
        int english;
        int math;
        Student(int korean = 0, int english = 0, int math = 0) {
            this->korean = korean;
            this->english = english;
            this->math = math;
        }
};

bool cmp(Student a, Student b) {
    if(a.korean == b.korean) {
        if(a.english == b.english) {
            return a.math > b.math;
        }
        return a.english > b.english;
    }
    return a.korean > b.korean;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    Student student[10];

    cin >> n;

    for(int i = 0; i < n; i++) {
        string name;
        int korean, english, math;

        cin >> name >> korean >> english >> math;

        student[i].name = name;
        student[i].korean = korean;
        student[i].english = english;
        student[i].math = math;
    }

    sort(student, student + n, cmp);

    for(int i = 0; i < n; i++) {
        cout << student[i].name << " ";
        cout << student[i].korean << " ";
        cout << student[i].english << " ";
        cout << student[i].math << endl;
    }

    return 0;
}