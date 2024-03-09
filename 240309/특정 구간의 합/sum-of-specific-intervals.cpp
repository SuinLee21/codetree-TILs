#include <iostream>
using namespace std;

int arr[100];

void SumArray(int a1, int a2) {
    int sum = 0;
    for (int i = a1 - 1; i < a2; i++) {
        sum += arr[i];    
    }
    cout << sum << endl;
}

int main() {
    int n, m, a1, a2;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> a1 >> a2;

        SumArray(a1, a2);
    }
    return 0;
}