#include <iostream>
using namespace std;

void Swap(int &n, int &m) {
    int temp = n;
    n = m;
    m = temp;

    cout << n << " " << m;
} 

int main() {
    int n, m;
    cin >> n >> m;

    Swap(n, m);

    return 0;
}