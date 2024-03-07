#include <iostream>
using namespace std;

int main() {
    int arr[10] = {}, count = 0, sum = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];

        if (arr[i] >= 250) {
            break;
        } else {
            sum += arr[i];
            count++;
        }
    }

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (double)sum / count;
    return 0;
}