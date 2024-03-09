#include <iostream>
using namespace std;

bool IsExit(int m, int d) {
    if(m > 12) {
        return false;
    }
    if (d > 31) {
        return false;
    }
    if (m == 2 && d > 28) {
        return false;
    }
    if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) {
        return false;
    }

    return true;
}

int main() {
    int m, d;
    cin >> m >> d;

    if(IsExit(m, d)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}