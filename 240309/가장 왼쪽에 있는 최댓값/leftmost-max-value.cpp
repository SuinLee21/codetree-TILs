#include <iostream>
using namespace std;

int main() {
    int n, arr[1000];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int scope = n;

    while(1) {
        int max = -1, idx;

        for (int i = 0; i < scope; i++) {
            if (arr[i] == max) {
                continue;
            }
            if (arr[i] > max) {
                max = arr[i];
                idx = i;
            }
        }
        cout << idx + 1 << " ";

        if (idx == 0) {
            break;
        }
        scope = idx;
    }
    return 0;
}