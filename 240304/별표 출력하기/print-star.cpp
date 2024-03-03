#include <iostream>
using namespace std;

int main() {
    int n, count = 1;
    cin >> n;

    for (int i = 1; i <= n * 2 - 1; i++) {
        for (int j = 1; j <= count; j++) {
            cout << "* ";
        }
        if (i >= n) {
            count--;
        } else {
            count++;
        }
        cout << endl;
    }

    return 0;
}