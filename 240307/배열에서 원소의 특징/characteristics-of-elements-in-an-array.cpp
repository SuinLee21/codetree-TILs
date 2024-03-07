#include <iostream>
using namespace std;

int main() {
    int arr[10] = {}, temp = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];

        if (arr[i] % 3 == 0) {
            temp = i;
            break;
        }
    }
    cout << arr[temp - 1];
    return 0;
}