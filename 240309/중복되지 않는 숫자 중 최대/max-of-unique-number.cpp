#include <iostream>
using namespace std;

int main() {
    int n, arr[1000];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = -1;

    for (int i = 0; i < n; i++) {
        int num = arr[i];

        if (num > max) {
            int count = 0;

            for (int j = 0; j < n; j++) {
                if (arr[j] == num) {
                    count++;
                }
            }
            if (count == 1) {
                max = num;
            }
        }
    }
    cout << max;
    return 0;
}