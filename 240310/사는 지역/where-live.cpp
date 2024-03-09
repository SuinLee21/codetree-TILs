#include <iostream>
#include <string>
using namespace std;

class Data{
    public:
        string name, addr, city;

        Data(string name = "", string addr = "", string city = "") {
            this->name = name;
            this->addr = addr;
            this->city = city;
        }
};

int main() {
    int n;
    Data peoples[10];
    string name, addr, city;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name >> addr >> city;
        peoples[i] = Data(name, addr, city);
    }

    int maxIdx = 0;

    for (int i = 1; i < n; i++) {
        if (peoples[maxIdx].name < peoples[i].name) {
            maxIdx = i;
        }
    }

    cout << "name " << peoples[maxIdx].name << endl;
    cout << "addr " << peoples[maxIdx].addr << endl;
    cout << "city " << peoples[maxIdx].city << endl;
    return 0;
}