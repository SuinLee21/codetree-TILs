#include <iostream>
using namespace std;

int main() {
    int math1, eng1, math2, eng2;
    cin >> math1 >> eng1 >> math2 >> eng2;

    if (math1 != math2) {
        if (math1 > math2) {
            cout << "A";
        } else {
            cout << "B";
        }
    } else {
        if (eng1 > eng2) {
            cout << "A";
        } else {
            cout << "B";
        }
    }
    return 0;
}