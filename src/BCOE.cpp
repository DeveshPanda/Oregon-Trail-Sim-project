#include "../header/BCOE.h"

void BCOE::checkTime(ostream& out) {
    Player::checkTime(out);
}

void BCOE::checkLowStats(ostream& out) {
    Player::checkLowStats(out);
}

void BCOE::getDayAndWeek(ostream& out) {
    Player::getDayAndWeek(out);
}

BCOE::BCOE(int m, int s, int e, const string& n) 
 : Player(m, s, e, n)
{ major = "BCOE"; }

void BCOE::intro() {
    cout << "Welcome to UCR BCOE " << this->getName() << ". I hope you are ready to embark on your journey as a Highlander!" << endl;
    cout << "Here are your current stats: " << endl;
    this->getStats();
}
