#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Student{
    public:
        string name;
        int s1;
        int s2;
        int s3;
        Student(string name = "", int s1 = 0, int s2 = 0, int s3 = 0) {
            this->name = name;
            this->s1 = s1;
            this->s2 = s2;
            this->s3 = s3;
        }
};

bool cmp(Student a, Student b) {
    return a.s1 + a.s2 + a.s3 < b.s1 + b.s2 + b.s3;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    Student student[10];

    cin >> n;

    for(int i = 0; i < n; i++) {
        string name;
        int s1, s2, s3;

        cin >> name >> s1 >> s2 >> s3;
        
        student[i].name = name;
        student[i].s1 = s1;
        student[i].s2 = s2;
        student[i].s3 = s3;
    }

    sort(student, student + n, cmp);

    for(int i = 0; i < n; i++) {
        cout << student[i].name << " ";
        cout << student[i].s1 << " ";
        cout << student[i].s2 << " ";
        cout << student[i].s3 << endl;
    }

    return 0;
}