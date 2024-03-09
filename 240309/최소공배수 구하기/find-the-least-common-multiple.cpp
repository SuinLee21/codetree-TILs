#include <iostream>
using namespace std;

void Max(int n, int m) {
    int scope = n >= m ? m : n;
    int max = 1;
    int min = 1;

    for (int i = 1; i <= scope; i++) {
        if (n % i == 0 && m % i == 0) {
            max = i;
        }
    }

    min = max * (n / max) * (m / max);
    cout << min;
}

int main() {
    int n, m;
    cin >> n >> m;

    Max(n, m);
    return 0;
}