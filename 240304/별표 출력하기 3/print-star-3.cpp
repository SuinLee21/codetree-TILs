#include <iostream>
using namespace std;

int main() {
    int n, count;
    cin >> n;
    count = n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i * 2; j++) {
            cout << " ";
        }
        for (int j = 2 * count - 1; j > 0; j--) {
            cout << "* ";
        }
        for (int j = 0; j < i * 2; j++) {
            cout << " ";
        }
        count--;
        cout << endl;
    }
    return 0;
}