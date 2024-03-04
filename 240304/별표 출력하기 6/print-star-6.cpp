#include <iostream>
using namespace std;

int main() {
    int n, count = 0, k = 3;
    cin >> n;

    for (int i = 0; i < 2 * n - 1; i++) {
        if (i < n) {
            for (int j = 0; j < count * 2; j++) {
                cout << " ";
            }
            for (int j = (n - i) * 2 - 1; j > 0; j--) {
                cout << "* ";
            }
            count++;
        } else {
            for (int j = 0; j < (count - 2) * 2; j++) {
                cout << " ";
            }
            for (int j = 0; j < k; j++) {
                cout << "* ";
            }
            count--;
            k += 2;
        }
        cout << endl;
    }
    return 0;
}