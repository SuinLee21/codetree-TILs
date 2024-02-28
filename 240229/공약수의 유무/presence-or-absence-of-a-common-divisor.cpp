#include <iostream>
using namespace std;
int main() {
    int a, b;
    bool hasCommonDivisor = false;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (1920 % i == 0 && 2880 % i == 0) {
            hasCommonDivisor = true;
            break;
        }
    }

    if (hasCommonDivisor) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}