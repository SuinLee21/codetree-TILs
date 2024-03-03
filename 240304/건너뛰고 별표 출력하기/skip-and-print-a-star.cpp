#include <iostream>
using namespace std;

int main() {
    int n, count;
    cin >> n;
    count = 1;

    for (int i = 1; i <= 2 * n - 1; i++) {
        for (int j = 1; j <= count; j++) {
            cout << "*";
        }

        if (i < n) {
            count++;
        } else {
            count--;
        }
        cout << endl << endl;
    }
    return 0;
}