#include <iostream>
using namespace std;

int main() {
    int a, b;

    if(a >= b) {
        cout << 1 << endl;
    }else {
        cout << 0 << endl;
    }

    if(a > b) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    if (b >= a) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    if (b > a) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    if (a == b) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    if (a != b) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}