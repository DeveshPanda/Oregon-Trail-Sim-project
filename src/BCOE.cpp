#include "../header/BCOE.h"

BCOE::BCOE(int m, int s, int e, const string& n) {
    Player(m, s, e, n);
    major = "BCOE";
}

void BCOE::intro() {
    cout << "Welcome to UCR BCOE " << this->getName() << ". I hope you are ready to embark on your journey as a Highlander!" << endl;
    cout << "Here are your current stats: " << endl;
    this->getStats();
}