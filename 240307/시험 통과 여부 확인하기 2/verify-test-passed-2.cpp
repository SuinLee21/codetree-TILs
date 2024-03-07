#include <iostream>
using namespace std;

int main() {
    int arr[4] = {};
    int n, sum = 0, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[j];
            sum += arr[j];
        }
        if ((double)sum / 4 >= 60) {
            cout << "pass" << endl;
            count++;
        } else {
            cout << "fail" << endl;
        }
        sum = 0;
    }
    cout << count;
    return 0;
}