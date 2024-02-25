#include <iostream>
using namespace std;

int main() {
    int math1, eng1, math2, eng2;
    cin >> math1 >> eng1 >> math2 >> eng2;

    if(math1 > math2 && eng1 > eng2) {
        cout <<1;
    } else {
        cout << 0;
    }
    return 0;
}