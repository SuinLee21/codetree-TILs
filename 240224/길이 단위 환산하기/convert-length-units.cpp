#include <iostream>
using namespace std;

int main() {
    double ft = 30.48;
    double num1;
    cin >> num1;

    cout << fixed;
    cout.precision(1);

    cout << ft * num1;
    return 0;
}