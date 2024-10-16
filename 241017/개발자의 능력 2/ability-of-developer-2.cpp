#include <iostream>
#include <algorithm>
#include <climits>
#include <cstdlib>
using namespace std;

#define MAX 6

int arr[MAX];
int sumAll;

int getDiff(int i, int j, int k, int l) {
    int sumTeamOne = arr[i] + arr[j];
    int sumTeamTwo = arr[k] + arr[l];
    int sumTeamThree = sumAll - sumTeamOne - sumTeamTwo;
    int biggestTeam = max(sumTeamOne, max(sumTeamTwo, sumTeamThree));
    int smallestTeam = min(sumTeamOne, min(sumTeamTwo, sumTeamThree));

    return biggestTeam - smallestTeam;
}

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 0; i < MAX; i++) {
        cin >> arr[i];
        sumAll += arr[i];
    }
    
    int ans = INT_MAX;
    for(int i = 0; i < MAX; i++) {
        for(int j = i + 1; j < MAX; j++) {
            for(int k = 0; k < MAX; k++) {
                if(k == i || k == j) continue;
                for(int l = 0; l < MAX; l++) {
                    if(l == i || l == j || l == k) continue;
                    ans = min(ans, getDiff(i, j, k, l));
                }
            }
        }
    }

    cout << ans;

    return 0;
}