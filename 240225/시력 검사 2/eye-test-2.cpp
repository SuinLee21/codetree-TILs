#include <iostream>
using namespace std;

int main() {

    float f; cin >> f;
    if(f >= 1.0)
    {
        cout << "High";
    }
    else if(f >= 0.5)
    {
        cout << "Middle";
    }
    else
    {
        cout << "Low";
    }

    return 0;
}