#include <iostream>
using namespace std;

int main() {
    int n1, n2, idx = 0, count = 0;
    int arr1[100] = {}, arr2[100] = {};
    bool is_coincide = false, is_sequence = false;
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    int i = 0;
    for (i = 0; i < n1; i++) {
        for (int j = idx; j < n2; j++) {
            if (j == 0 && (arr1[i] == arr2[j])) {
                is_coincide = true;
                idx = j + 1;
                count++;
                break;
            }

            if (is_coincide && (arr1[i] == arr2[j])) {
                idx = j + 1;
                count++;
                break;
            }

            if (is_coincide && (arr1[i] != arr2[j])) {
                is_coincide = false;
                idx = 0;
                count = 0;
                break;
            }
        }
        if (count == n2) {
            is_sequence = true;
            break;
        }
    }
    
    if (is_sequence) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}