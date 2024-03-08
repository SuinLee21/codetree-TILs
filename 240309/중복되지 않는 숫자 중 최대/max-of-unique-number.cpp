#include <iostream>
using namespace std;

int main() {
    int n, arr[1000];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    bool is_duplicate = false;

    for (int i = 1; i < n; i++) {
        if (arr[i] == max) {
            is_duplicate = true;
        }
        else if (arr[i] > max) {
            max = arr[i];
            is_duplicate = false;
        }
    }

    if (is_duplicate) {
        cout << -1;
    } else {
        cout << max;
    }
    return 0;
}