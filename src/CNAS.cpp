#include "../header/CNAS.h"

CNAS::CNAS(int m, int s, int e, const string& n) {
    Player(m, s, e, n);
    major = "CNAS";
}

void CNAS::intro() {
    cout << "Welcome to UCR CNAS " << this->getName() << ". I hope you are ready to embark on your journey as a Highlander!" << endl;
    cout << "Here are your current stats: " << endl;
    this->getStats();
}
