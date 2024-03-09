#include <iostream>
#include <string>
using namespace std;

class set {
    public:
        string secretCode, meeting;
        int time;

        set(string secretCode, string meeting, int time) {
            this->secretCode = secretCode;
            this->meeting = meeting;
            this->time = time;
        }
};

int main() {
    string str1, str2;
    int time;

    cin >> str1 >> str2 >> time;
    
    set set(str1, str2, time);

    cout << "secret code : " << set.secretCode << endl;
    cout << "meeting point : " << set.meeting << endl;
    cout << "time : " << set.time;
    return 0;
}