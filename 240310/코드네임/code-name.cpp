#include <iostream>
using namespace std;

class Score {
    public:
        char name;
        int score;

        Score(char name = ' ', int score = 0) {
            this->name = name;
            this->score = score;
        }
};

int main() {
    int min, idx;
    Score scores[5];

    for (int i = 0; i < 5; i++) {
        char name;
        int score;

        cin >> name >> score;
        scores[i] = Score(name, score);
    }

    min = scores[0].score;

    for (int i = 1; i < 5; i++) {
        if (min > scores[i].score) {
            min = scores[i].score;
            idx = i;
        }
    }

    cout << scores[idx].name << " " << scores[idx].score;
    return 0;
}