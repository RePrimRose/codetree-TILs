#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define MAX 100

int n;
int x1[MAX], x2[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    bool isOverlap = false;

    for(int i = 0; i < n; i++) {
        int max_x1 = INT_MIN;
        int min_x2 = INT_MAX;

        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            
            max_x1 = max(max_x1, x1[j]);
            min_x2 = min(min_x2, x2[j]);
        }

        if(min_x2 >= max_x1) isOverlap = true;
    }

    if(isOverlap) cout << "Yes";
    else cout << "No";
    
    return 0;
}