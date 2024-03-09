#include <iostream>
#include <string>
using namespace std;

bool CheckPalindrome(string &str) {
    string temp = "";

    for(int i = str.length() - 1; i >= 0; i--) {
        temp += str[i];
    }

    return temp == str;
}

int main() {
    string str;
    cin >> str;

    if (CheckPalindrome(str)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}