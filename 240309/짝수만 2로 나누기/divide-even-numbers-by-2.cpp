#include <iostream>
using namespace std;

void DivideEven(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] /= 2;
        }
    }
}

int main() {
    int n, arr[50];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    DivideEven(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}