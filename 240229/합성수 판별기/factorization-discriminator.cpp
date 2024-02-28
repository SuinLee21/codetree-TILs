#include <iostream>
using namespace std;

int main() {
    int n;
    bool isComposite = false;
    cin >> n;

    for(int i = 2; i < n; i++){
        if (n % i == 0) {
            isComposite = true;
        }
    }

    if(isComposite) {
        cout << "C";
    } else {
        cout << "N";
    }
    return 0;
}