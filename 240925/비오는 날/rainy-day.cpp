#include <iostream>
#include <string>
using namespace std;

class Forecast {
    public:
        string date;
        string weekday;
        string weather;

        Forecast(string date = "", string weekday = "", string weather = "") {
            this->date = date;
            this->weekday = weekday;
            this->weather = weather;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    Forecast forecast[100];

    cin >> n;

    int earliestDate = 0;
    for(int i = 0; i < n; i++) {
        string date, weekday, weather;

        cin >> date >> weekday >> weather;

        forecast[i].date = date;
        forecast[i].weekday = weekday;
        forecast[i].weather = weather;

        if(weather == "Rain") earliestDate = i;
    }

    for(int i = 0; i < n; i++) {
        if(forecast[earliestDate].date > forecast[i].date && forecast[i].weather == "Rain") earliestDate = i;
    }

    cout << forecast[earliestDate].date << " " << forecast[earliestDate].weekday << " " << forecast[earliestDate].weather;

    return 0;
}