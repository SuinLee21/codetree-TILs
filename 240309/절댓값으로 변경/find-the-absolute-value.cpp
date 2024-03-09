#include <iostream>
using namespace std;

void ChangeNum(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] *= (-1);
        }
    }
}

int main() {
    int n, arr[50];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ChangeNum(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}