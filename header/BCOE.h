#ifndef BCOE_H
#define BCOE_H

#include "Player.h"

class BCOE : public Player {
public:
    BCOE(int, int, int, const string&);
    virtual void intro();
};

#endif
