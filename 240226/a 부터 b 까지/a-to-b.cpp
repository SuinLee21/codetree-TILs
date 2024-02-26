#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for(int i = a; i <= b; i = i % 2 == 0 ? i + 3 : i * 2) {
        cout << i << " ";
    }
    return 0;
}