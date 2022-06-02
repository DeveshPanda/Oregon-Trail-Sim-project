#include "../header/CHASS.h"

CHASS::CHASS(int m, int s, int e, const string& n) {
    Player(m, s, e, n);
    major = "CHASS";
}

void CHASS::intro() {
    cout << "Welcome to UCR CHASS " << this->getName() << ". I hope you are ready to embark on your journey as a Highlander!" << endl;
    cout << "Here are your current stats: " << endl;
    this->getStats();
}