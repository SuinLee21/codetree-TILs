#include <iostream>
using namespace std;

int main() {
    int midterm, finals;
    cin >> midterm >> finals;

    if (midterm < 90) {
        cout << 0;
    } else if (finals >= 95) {
        cout << 100000;
    } else if (finals >= 90) {
        cout << 50000;
    } else {
        cout << 0;
    }
    return 0;
}