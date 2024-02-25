#include <iostream>
using namespace std;

int main() {
    int height, weight;
    cin >> height >> weight;

    int bmi = weight / ((height * 0.01) * (height * 0.01));

    cout << bmi << endl;

    if(bmi >= 25) {
        cout << "Obesity";
    }
    return 0;
}