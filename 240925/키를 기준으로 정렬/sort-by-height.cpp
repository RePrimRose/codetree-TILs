#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Student{ 
    public:
        string name;
        int height;
        int weight;
        Student(string name = "", int height = 0, int weight = 0) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
};

bool cmp(Student a, Student b) {
    return a.height < b.height;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    Student student[10];

    cin >> n;

    for(int i = 0; i < n; i++) {
        string name;
        int height, weight;

        cin >> name >> height >> weight;

        student[i].name = name;
        student[i].height = height;
        student[i].weight = weight;
    }

    sort(student, student + n, cmp);

    for(int i = 0; i < n; i++) {
        cout << student[i].name << " " << student[i].height << " " << student[i].weight << endl;
    }

    return 0;
}