#include <iostream>
using namespace std;

int main() {
    int a, b, arr[10] = {}, sum = 0;
    cin >> a >> b;

    while(a / b != 0) {
        arr[a % b]++;
        a /= b;
    }

    for (int i = 0; i < 10; i++) {
        sum += arr[i] * arr[i];
    }
    cout << sum;
    return 0;
}