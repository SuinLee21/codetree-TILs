#include <iostream>
using namespace std;

int main() {
    int n, arr[1000];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];
    bool is_duplicate = false;

    for (int i = 1; i < n; i++) {
        if (max == arr[i]) {
            is_duplicate = true;
        } else if (arr[i] > max) {
            is_duplicate = false;
            max = arr[i];
        }

        if (min > arr[i]) {
            min = arr[i];
        }
    }

    if (is_duplicate) {
        while(is_duplicate || min != max){
            int nextMax;
            bool is_initialized = false;

            for (int i = 0; i < n; i++) {
                if (arr[i] >= max) {
                    is_duplicate = true;
                    continue;
                }
                if (!is_initialized) {
                    nextMax = arr[i];
                    is_initialized = true;
                    is_duplicate = false;
                    continue;
                }
                if (arr[i] > nextMax) {
                    nextMax = arr[i];
                }
            }
            max = nextMax;
        }
        if (min == max) {
            cout << -1;
        } else {
            cout << max;
        }
    } else {
        cout << max;
    }
    return 0;
}