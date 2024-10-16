#include <iostream>
#include <algorithm>
#include <climits>
#include <cstdlib>
using namespace std;

int n, h, t;
int arr[100];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> h >> t;

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    int minCost = INT_MAX;
    for(int i = 0; i < n; i++) {
        int sumCost = 0;
        for(int j = i; j < i + t; j++) {
            sumCost += abs(t - arr[j]);
        }
        minCost = min(minCost, sumCost);
    }

    cout << minCost;

    return 0;
}