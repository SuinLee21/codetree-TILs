#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[10];
    char c;
    bool b = false;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    cin >> c;

    for (int i = 0; i < 10; i++) {
        if (arr[i][arr[i].length() - 1] == c) {
            cout << arr[i] << endl;
            b = true;
        }
    }

    if(!b) {
        cout << "None";
    }
    return 0;
}