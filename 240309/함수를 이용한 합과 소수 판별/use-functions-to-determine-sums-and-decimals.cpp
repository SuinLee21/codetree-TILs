#include <iostream>
using namespace std;

bool Is_prime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
        if (((n / 10) + (n % 10)) % 2 != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int a, b, count = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if(i == 1 || i == 100) {
            continue;
        }
        if (Is_prime(i)) {
            count++;
        }
    }
    cout << count;
    return 0;
}