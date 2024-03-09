#include <iostream>
using namespace std;

int SumPrime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    
    return n;
}

int main() {
    int a, b, sum = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i == 1) [
            continue;
        ]
        sum += SumPrime(i);
    }
    cout << sum;
    return 0;
}