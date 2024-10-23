#include <iostream>
#include <vector>
using namespace std;

#define XY_MAX 20

int n;
int x[XY_MAX], y[XY_MAX];

bool x3() {
    for(int i = 0; i <= 10; i++) {
        for(int j = i + 1; j <= 10; j++) {
            bool isPossible = true;
            for(int k = j + 1; k <= 10; k++) {
                for(int l = 0; l < n; l++) {
                    if(x[l] != i && x[l] != j && x[l] != k) {
                    isPossible = false;
                    break;
                    }
                }
            }
            if(isPossible) return true;
        }
    }

    return false;
}

bool y3() {
    for(int i = 0; i <= 10; i++) {
        for(int j = i + 1; j <= 10; j++) {
            bool isPossible = true;
            for(int k = j + 1; k <= 10; k++) {
                for(int l = 0; l < n; l++) {
                    if(y[l] != i && y[l] != j && y[l] != k) {
                    isPossible = false;
                    break;
                    }
                }
            }
            if(isPossible) return true;
        }
    }

    return false;
}

bool x2y1() {
    for(int i = 0; i <= 10; i++) {
        for(int j = i + 1; j <= 10; j++) {
            bool isPossible = true;
            for(int k = 0; k <= 10; k++) {
                for(int l = 0; l < n; l++) {
                    if(x[l] != i && x[l] != j && y[l] != k) {
                    isPossible = false;
                    break;
                    }
                }
            }
            if(isPossible) return true;
        }
    }

    return false;
}

bool x1y2() {
    for(int i = 0; i <= 10; i++) {
        for(int j = i + 1; j <= 10; j++) {
            bool isPossible = true;
            for(int k = 0; k <= 10; k++) {
                for(int l = 0; l < n; l++) {
                    if(y[l] != i && y[l] != j && x[l] != k) {
                    isPossible = false;
                    break;
                    }
                }
            }
            if(isPossible) return true;
        }
    }

    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    if(x3() || y3() || x2y1() || x1y2()) cout << 1;
    else cout << 0;

    return 0;
}