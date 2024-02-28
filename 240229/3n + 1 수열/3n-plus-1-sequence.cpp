#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    while(1) {
        if (n == 1) {
            break;
        }

        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        count++;
    }

    cout << count;
    return 0;
}