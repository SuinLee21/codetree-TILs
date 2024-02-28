#include <iostream>
using namespace std;

int main() {
    int n, temp, cnt = 0;
    cin >> n;
    
    temp = n;
    for (int i = 1; i <= n; i++) {
        temp /= i;
        cnt++;
        if (temp <= 1){
            break;
        }
    }
    cout << cnt;
    return 0;
}