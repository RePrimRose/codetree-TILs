#include <iostream>
#include <algorithm>
#include <climits>
#include <cstdlib>
using namespace std;

#define MAX 5

int arr[MAX];
int sumAll;

int getDiff(int i, int j, int k, int l) {
    int sumTeamOne = arr[i] + arr[j];
    int sumTeamTwo = arr[k] + arr[l];
    int sumTeamThree = sumAll - sumTeamOne - sumTeamTwo;
    int biggestTeam = max(sumTeamOne, max(sumTeamTwo, sumTeamThree));
    int smallestTeam = min(sumTeamOne, min(sumTeamTwo, sumTeamThree));

    if(sumTeamOne == sumTeamTwo || sumTeamTwo == sumTeamThree || sumTeamOne == sumTeamThree) return INT_MAX;
    else return biggestTeam - smallestTeam;
}

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 0; i < MAX; i++) {
        cin >> arr[i];
        sumAll += arr[i];
    }
    
    int ans = INT_MAX;
    for(int i = 0; i < MAX; i++)
        for(int j = i + 1; j < MAX; j++)
            for(int k = 0; k < MAX; k++)
                for(int l = k + 1; l < MAX; l++) {
                    if(k == i || k == j || l == i || l == j) continue;
                    ans = min(ans, getDiff(i, j, k, l));
                }

    if(ans == INT_MAX) cout << -1;
    else cout << ans;

    return 0;
}