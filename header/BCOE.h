#ifndef BCOE_H
#define BCOE_H

#include "Player.h"

class BCOE : public Player {
public:
    virtual void checkTime(std::ostream&);
    virtual void checkLowStats(std::ostream&);
    virtual void getDayAndWeek(std::ostream&);
    BCOE(int, int, int, const std::string&);
    virtual void intro();
};


#endif
