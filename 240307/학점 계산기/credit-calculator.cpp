#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double arr[5] = {}, sum = 0, avg = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        sum += arr[i];
    }

    cout << fixed;
    cout.precision(1);

    avg = sum / n;
    cout << avg << endl;

    if (avg >= 4.0) {
        cout << "Perfect";
    } else if (avg >= 3.0) {
        cout << "Good";
    } else {
        cout << "Poor";
    }
    return 0;
}