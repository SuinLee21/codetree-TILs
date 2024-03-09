#include <iostream>
#include <string>
using namespace std;

class Code{
    public:
        string code, color;
        int second;

        Code(string code, string color, int second) {
            this->code = code;
            this->color = color;
            this->second = second;
        }
};

int main() {
    string code, color;
    int second;

    cin >> code >> color >> second;

    Code ccode(code, color, second);

    cout << "code : " << ccode.code << endl;
    cout << "color : " << ccode.color << endl;
    cout << "second : " << ccode.second << endl;
    return 0;
}