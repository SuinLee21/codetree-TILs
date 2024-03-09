#include <iostream>
using namespace std;
void max(int n, int m) {
    int scope = n >= m ? m : n;
    int max = 1;

    for (int i = 1; i <= scope; i++) {
        if (n % i == 0 && m % i == 0) {
            max = i;
        }
    }
    cout << max;
}

int main() {
    int n, m;
    cin >> n>> m;

    max(n, m);
    return 0;
}