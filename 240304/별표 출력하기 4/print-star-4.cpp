#include <iostream>
using namespace std;

int main() {
    int n, count;
    cin >> n;
    count = n;

    for (int i = 1; i <= n * 2 - 1; i++) {
        for (int j = count; j >= 1; j--) {
            cout << "* ";
        }
        if (i < n) {
            count--;
        } else {
            count++;
        }
        cout << endl;
    }
    return 0;
}