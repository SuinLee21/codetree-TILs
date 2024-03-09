#include <iostream>
#include <string>
using namespace std;

string str;
string str1;

void FindString() {
    if (str.find(str1) != string::npos) {
        cout << str.find(str1);
    } else {
        cout << -1;
    }
}

int main() {
    cin >> str;
    cin >> str1;

    FindString();
    return 0;
}