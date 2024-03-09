#include <iostream>
#include <string>
using namespace std;

class Charactor{
    public:
        string id;
        int level;

        Charactor(string id, int level) {
            this->id = id;
            this->level = level;
        }
};

int main() {
    string id;
    int level;

    cin >> id >> level;

    Charactor student1 = Charactor("codetree", 10);
    Charactor student2 = Charactor(id, level);

    cout << "user " << student1.id << " lv " << student1.level << endl;
    cout << "user " << student2.id << " lv " << student2.level << endl;
    return 0;
}