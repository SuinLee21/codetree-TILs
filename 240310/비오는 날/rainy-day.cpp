#include <iostream>
#include <iostream>
using namespace std;

class Forcast{
    public:
        string date, week, weather;

        Forcast(string date, string week, string weather) {
            this->date = date;
            this->week = week;
            this->weather = weather;
        }
        Forcast() {}
};

int main() {
    int n, idx;
    int minYear = 2101, minMonth = 13, minDay = 32;
    string date, week, weather;
    Forcast forcasts[100];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> date >> week >> weather;

        forcasts[i] = Forcast(date, week, weather);
    }

    for (int i = 0; i < n; i++) {
        int subYear = stoi(forcasts[i].date.substr(0, 4));
        int subMonth = stoi(forcasts[i].date.substr(5, 2));
        int subDay = stoi(forcasts[i].date.substr(8, 2));

        if (forcasts[i].weather != "Rain") {
            continue;
        }
        if (subYear > minYear) {
            continue;
        }
        if (subYear < minYear) {
            minYear = subYear;
            minMonth = subMonth;
            minDay = subDay;
            idx = i;
            continue;
        }
        if (subYear == minYear && subMonth > minMonth) {
            continue;
        }
        if (subYear == minYear && subMonth < minMonth) {
            minMonth = subMonth;
            minDay = subDay;
            idx = i;
            continue;
        }
        if (subMonth == minMonth && subDay < minDay) {
            minDay = subDay;
            idx = i;
        }
    }

    cout << forcasts[idx].date << " " << forcasts[idx].week << " " << forcasts[idx].weather;

    return 0;
}