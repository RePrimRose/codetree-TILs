#include <iostream>
using namespace std;

class Agent{
    public:
        char codeName;
        int score;

        Agent(char codeName = ' ', int score = 0) {
            this->codeName = codeName;
            this->score = score;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    Agent agent[5];

    char worstAgent;
    int worstScore = 100;
    for(int i = 0; i < 5; i++) {
        char c;
        int n;

        cin >> c >> n;
        agent[i].codeName = c;
        agent[i].score = n;

        if(worstScore > n) {
            worstAgent = c;
            worstScore = n;
        }
    }

    cout << worstAgent << " " << worstScore;

    return 0;
}