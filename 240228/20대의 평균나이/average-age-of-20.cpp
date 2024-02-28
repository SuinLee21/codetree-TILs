#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int count = 0;
    while (1) {
        int n;
        cin >> n;

        if (20 <= n && n < 30) {
            sum += n;
            count++;
        } else {
            break;
        }
    }

    cout << fixed;
    cout.precision(2);

    cout << (double)sum / count;
    return 0;
}