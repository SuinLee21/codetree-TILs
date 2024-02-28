#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    while (1) {
        if (n == 1) {
            break;
        }

        n /= 2;
        count++;
    }

    cout << count;
    return 0;
}