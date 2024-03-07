#include <iostream>
using namespace std;

int main() {
    int arr[100] = {}, temp = 0;

    for (int i = 0; i < 100; i++) {
        cin >> arr[i];
        if (temp == 0 && arr[i] == 0) {
            temp = i;
        }
    }

    cout << arr[temp - 3] + arr[temp - 2] + arr[temp - 1];
    return 0;
}