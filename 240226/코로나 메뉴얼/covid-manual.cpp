#include <iostream>
using namespace std;

int main() {
    int degree1, degree2, degree3, count = 0;
    char state1, state2, state3;

    cin >> state1 >> degree1 >> state2 >> degree2 >> state3 >> degree3;

    if (state1 == 'Y') {
        if (degree1 >= 37) {
            count += 1;
        }
    }
    if (state2 == 'Y') {
        if (degree2 >= 37) {
            count += 1;
        }
    }
    if (state3 == 'Y') {
        if (degree3 >= 37) {
            count += 1;
        }
    }

    if (count >= 2) {
        cout << "E";
    } else {
        cout << "N";
    }
    return 0;
}