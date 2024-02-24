#include <iostream>
using namespace std;

int main() {
    int left, middle, right, temp;
    char x;

    cin >> left >> x >> middle >> x >> right;

    temp = middle;
    middle = right;
    right = temp;

    cout << "0" << left << x << middle << x << right;
    return 0;
}