#ifndef BCOE_H
#define BCOE_H

#include "Player.h"

class BCOE : public Player {
public:
    void checkTime(ostream&);
    void checkLowStats(ostream&);
    void getDayAndWeek(ostream&);
    BCOE(int, int, int, const string&);
    virtual void intro();
};

#endif
