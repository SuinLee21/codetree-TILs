#include <iostream>
using namespace std;

int main() {
    int n, odd = 11;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << odd + 2 * j << " ";
        }
        cout << endl;
        odd += 2;
    }
    return 0;
}