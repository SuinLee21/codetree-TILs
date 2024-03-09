#include <iostream>
using namespace std;

int arr[100];
int sum = 0;
int n, m;

void SumIdx() {
    if (m % 2 == 0) {
        m /= 2;
    } else {
        m -= 1;
    }

    sum += arr[m - 1];
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sum += arr[m - 1];

    while(m / 2 != 0) {
        SumIdx();
    }
    cout << sum;
    return 0;
}