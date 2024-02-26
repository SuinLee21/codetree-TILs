#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int quotient;
    int remainder;

    for (int i = 1; i <= n; i++) {
        quotient = i / 10;
        remainder = i % 10;
        
        if (i % 3 == 0) {
            cout << 0 << " ";
        } else if (quotient != 0 && quotient % 3 == 0) {
            cout << 0 << " ";
        } else if (remainder != 0 && remainder % 3 == 0) {
            cout << 0 << " ";
        } else {
            cout << i << " ";
        }
    }
    return 0;
}