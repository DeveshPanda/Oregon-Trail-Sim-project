#include "../header/BCOE.h"
using namespace std;

virtual void BCOE::checkTime(std::ostream& out) {
    this->checkTime(out);
}

virtual void BCOE::checkLowStats(std::ostream& out) {
    this->checkLowStats(out);
}

virtual void BCOE::getDayAndWeek(std::ostream& out) {
    this->getDayAndWeek(out);
}

BCOE::BCOE(int m, int s, int e, const string& n) 
 : Player(m, s, e, n)
{ major = "BCOE"; }

virtual void BCOE::intro() {
    cout << "Welcome to UCR BCOE " << this->getName() << ". I hope you are ready to embark on your journey as a Highlander!" << endl;
    cout << "Here are your current stats: " << endl;
    this->getStats();
}
