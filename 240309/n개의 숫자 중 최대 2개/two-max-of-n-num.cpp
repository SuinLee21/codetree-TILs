#include <iostream>
using namespace std;

int main() {
    int arr[100] = {};
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0], idx = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            idx = i;
        }
    }

    int secondMax = max - 1;

    for (int i = 0; i < 10; i++) {
        if (i == idx) {
            continue;
        }
        if (arr[i] >= secondMax) {
            secondMax = arr[i];
        }
    }
    cout << max << " " << secondMax;
    return 0;
}