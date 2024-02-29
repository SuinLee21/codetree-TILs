#include <iostream>
using namespace std;

int main() {
    bool isThreeDivisible = true;

    for (int i = 1; i <= 5; i++) {
        int n;
        cin >> n;

        if (n % 3 != 0) {
            isThreeDivisible = false;
        }
    }

    if (isThreeDivisible) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}