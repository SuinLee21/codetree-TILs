#include <iostream>
using namespace std;

int main() {
    int n, arr[100] = {}, idx, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == 2) {
            idx = i + 1;
            count++;
        }
        if (count == 3) {
            break;
        }
    }
    cout << idx;
    return 0;
}