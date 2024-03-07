#include <iostream>
using namespace std;

int main() {
    int arr[9] = {}, n, m;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> m;

        arr[m - 1]++;
    }

    for (int i = 0; i < 9; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}