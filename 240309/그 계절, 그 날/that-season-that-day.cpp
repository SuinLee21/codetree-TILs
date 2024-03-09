#include <iostream>
using namespace std;

int GetLastDay(int y, int m) {
    if (m == 4 || m == 6 || m == 9 || m == 11) {
        return 30;
    }

    if (m == 2) {
        if (y % 4 != 0) {
            return 28;
        }
        if (y % 100 != 0) {
            return 29;
        }
        if (y % 400 == 0) {
            return 29;
        }
        return 28;
    }

    return 31;
}

int GetMonth(int y, int m, int d) {
    if (d > GetLastDay(y, m)) {
        return -1;
    }

    return m;
}

int main() {
    int y, m, d;
    cin >> y >> m >> d;

    if (GetMonth(y, m, d) == -1) {
        cout << -1;
    }
    else if (3 <= GetMonth(y, m, d) && GetMonth(y, m, d) <= 5) {
        cout << "Spring";
    }
    else if (6 <= GetMonth(y, m, d) && GetMonth(y, m, d) <= 8) {
        cout << "Summer";
    }
    else if (9 <= GetMonth(y, m, d) && GetMonth(y, m, d) <= 11) {
        cout << "Fall";
    }
    else {
        cout << "Winter";
    }
    return 0;
}