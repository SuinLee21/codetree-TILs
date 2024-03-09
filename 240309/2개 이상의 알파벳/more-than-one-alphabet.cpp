#include <iostream>
#include <string>
using namespace std;

bool IsDifferenceStr(string &str) {
    char temp = str[0];

    for (int i = 1; i < str.length(); i++) {
        if (temp != str[i]) {
            return true;
        }
    }
    return false;
}


int main() {
    string str;
    cin >> str;

    if(IsDifferenceStr(str)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}