#include <iostream>
using namespace std;

int main() {
    int a, b, c, min = 0;
    cin >> a >> b >> c;

    if(min >= a) {
        min = a;
    }
    if(min >= b) {
        min = b;
    }
    if(min >= c) {
        min = c;
    }
    cout << min;
    return 0;
}