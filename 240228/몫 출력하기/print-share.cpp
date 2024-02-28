#include <iostream>
using namespace std;

int main() {
    int count = 0;
    while(1) {
        int n;
        cin >> n;
        
        if (n % 2 == 1) {
            continue;
        } else {
            count++;
            cout << n / 2 << endl;
        }

        if (count == 3) {
            break;
        }
    }
    return 0;
}