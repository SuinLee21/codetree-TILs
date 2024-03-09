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

bool IsExit(int y, int m, int d) {
    if (d > GetLastDay(y, m)) {
        return false;
    }

    return true;
}

int main() {
    int y, m, d;
    cin >> y >> m >> d;

    if (!IsExit(y, m, d)) {
        cout << -1;
        return 0;
    }
    
    if (3 <= m && m <= 5) {
        cout << "Spring";
    }
    else if (6 <= m && m <= 8) {
        cout << "Summer";
    }
    else if (9 <= m && m <= 11) {
        cout << "Fall";
    }
    else {
        cout << "Winter";
    }
    return 0;
}