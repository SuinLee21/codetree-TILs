#include <iostream>
using namespace std;

void PrintNum(int n);

int main() {
    int n;
    cin >> n;

    PrintNum(n);
    return 0;
}

void PrintNum(int n) {
    int count = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << count << " ";
            count++;
            if (count == 10) {
                count = 1;
            }
        }
        cout << endl;
    }
}