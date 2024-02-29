#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = i * i; j >= 1; j--) {
            cout << "*";
            if (j % i == 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}