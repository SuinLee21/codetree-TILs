#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;

    a = n / 6;
    b = n / 12;

    cout << n / 2 - a << " " << n / 3 - b << " " << n / 12;
    return 0;
}