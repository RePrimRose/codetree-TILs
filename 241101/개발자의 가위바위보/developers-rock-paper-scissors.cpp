#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 100

int n;
int first[MAX], second[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> first[i] >> second[i];
    }

    int ans = 0;
    for(int rock = 1; rock < 4; rock++) {
        for(int scissors = 1; scissors < 4; scissors++) {
            if(rock == scissors) continue;

            int cnt = 0;
            for(int paper = 1; paper < 4; paper++) {
                if(paper == rock || paper == scissors) continue;

                for(int i = 0; i < n; i++) {
                    if(first[i] == paper && second[i] == rock) cnt++;
                    if(first[i] == scissors && second[i] == paper) cnt++;
                    if(first[i] == rock && second[i] == scissors) cnt++;
                }
            }
            ans = max(ans, cnt);
        }
    }

    cout << ans;

    return 0;
}