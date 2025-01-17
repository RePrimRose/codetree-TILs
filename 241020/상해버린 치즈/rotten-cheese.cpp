#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 51
#define MAX_RECORD 1000

int n, m, d, s;
bool eaten_count[MAX][MAX];
pair<int, pair<int, int>> eaten_record[MAX_RECORD];
pair<int, int> sick_record[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m >> d >> s;

    for(int i = 0; i < d; i++)
        cin >> eaten_record[i].first >> eaten_record[i].second.first >> eaten_record[i].second.second;

    for(int i = 0; i < s; i++)
        cin >> sick_record[i].first >> sick_record[i].second;

    for(int i = 0; i < s; i++) {
        int sick_person = sick_record[i].first, sick_time = sick_record[i].second;
        bool who_eaten[MAX] = {};
        for(int j = 0; j < d; j++) {
            int eaten_person = eaten_record[j].first; 
            int eaten_cheese = eaten_record[j].second.first;
            int eaten_time = eaten_record[j].second.second;
            if(sick_person == eaten_person && eaten_time < sick_time) eaten_count[i][eaten_cheese] = true;
        }
    }

    int ans = 0;
    for(int i = 1; i <= m; i++) {
        bool possible = true;
        for(int j = 0; j < s; j++) {
            if(!eaten_count[j][i]) {
                possible = false;
                break;
            }
        }
        if(possible) {
            int cnt = 0;
            bool who_eaten[MAX] = {};
            for(int j = 0; j < d; j++) {
                int eaten_person = eaten_record[j].first;
                int eaten_cheese = eaten_record[j].second.first;
                if(eaten_cheese == i && !who_eaten[eaten_person]) {
                    who_eaten[eaten_person] = true;
                    cnt++;
                }
            }
            ans = max(ans, cnt);
        }
    }

    cout << ans;

    return 0;
}