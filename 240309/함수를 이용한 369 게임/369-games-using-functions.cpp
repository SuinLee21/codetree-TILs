#include <iostream>
using namespace std;

bool ISInThree(int n) {
    int temp = n % 10;
    bool isThree = false;
    while(n != 0) {
        n /= 10;

        if (temp != 0 && temp % 3 == 0) {
            isThree = true;
            break;
        }
        temp = n % 10;
    }
    return isThree;
}

bool IsThree(int n) {
    return (n % 3 == 0) || ISInThree(n);
}

int main() {
    int a, b, count = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (IsThree(i)) {
            count++;
        }
    }
    cout << count;
    return 0;
}