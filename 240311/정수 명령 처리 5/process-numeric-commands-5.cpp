#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, value;
    string str;
    vector<int> v;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str;

        if (str == "push_back") {
            cin >> value;
            v.push_back(value);
        } else if (str == "pop_back") {
            v.pop_back();
        } else if (str == "size") {
            cout << v.size() << endl;
        } else if (str == "get") {
            cin >> value;
            cout << v[value - 1] << endl;
        }
    }

    return 0;
}