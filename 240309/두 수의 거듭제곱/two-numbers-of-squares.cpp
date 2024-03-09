#include <iostream>
using namespace std;

int pow(int a, int b) {
    int pow = 1;
    for (int i = 0; i < b; i++) {
        pow *= a;
    }
    return pow;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << pow(a, b);
    return 0;
}