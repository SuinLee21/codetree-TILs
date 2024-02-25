#include <iostream>
using namespace std;

int main() {
    char eng;
    cin >> eng;

    if (eng == 'S') {
        cout << "Superior";
    } else if (eng == 'A') {
        cout << "Excellent";
    } else if (eng == 'B') {
        cout << "Good";
    } else if (eng == 'C') {
        cout << "Usually";
    } else if (eng == 'D') {
        cout << "Effort";
    } else {
        cout << "Failure";
    }
    return 0;
}