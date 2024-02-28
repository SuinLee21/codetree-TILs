#include <iostream>
using namespace std;

int main() {
    int n, cnt = 1;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        n /= i;
        cnt++;
        if (n == 0){
            break;
        }
    }
    cout << cnt;
    return 0;
}