#include <iostream>
using namespace std;

int main() {
    int arr[4] = {}, n, count = 0;
    char m;

    for (int i = 0; i < 3; i++) {
        cin >> m >> n;

        if (m == 'Y') {
            if (n >= 37) {
                arr[0]++;
                count++;
            } else {
                arr[2]++;
            }
        } else {
            if (n >= 37) {
                arr[1]++;
            } else {
                arr[3]++;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
    if (count >= 2) {
        cout << "E";
    }

    return 0;
}