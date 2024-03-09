#include <iostream>
using namespace std;

bool IsYoon(int n) {
    if (n % 4 != 0) {
        return false;
    }
    if (n % 100 == 0 && n % 400 != 0) {
        return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    if (IsYoon(n)) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}