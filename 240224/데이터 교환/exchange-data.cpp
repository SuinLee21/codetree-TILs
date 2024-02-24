#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 6, c = 7, temp = 0;
    temp = a;
    a = b;
    b = temp;

    temp = a;
    a = c;
    c = temp;

    cout << a << endl;
    cout << b << endl;
    cout << c;
    return 0;
}