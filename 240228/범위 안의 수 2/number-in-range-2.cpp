#include <iostream>
using namespace std;

int main() {
    int sum = 0, cnt = 0;
    for (int i = 0; i < 10; i++) {
        int n;
        cin >> n;

        if (0 <= n && n <= 200) {
            sum += n;
            cnt++;
        }
    }

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (double)sum / cnt;
    return 0;
}