#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    bool isCDivisible = false;
    cin >> a >> b >> c;

    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            isCDivisible = true;
            break;
        }
    }

    if (isCDivisible) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}