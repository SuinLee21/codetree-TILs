#include <iostream>
using namespace std;

int main() {
    int n, q, arr[100] = {};
    cin >> n >> q;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++) {
        int type, a, b;
        cin >> type;

        if (type == 1) {
            cin >> a;

            cout << arr[a - 1];
        } else if (type == 2) {
            int idx = 0;
            cin >> a;

            for (int j = 0; j < n; j++) {
                if (arr[j] == a) {
                    idx = j + 1;
                    break;
                }
            }
            cout << idx;
        } else if (type == 3) {
            cin >> a >> b;

            for (int j = a - 1; j < b; j++) {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}