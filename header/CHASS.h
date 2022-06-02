#ifndef CHASS_H
#define CHASS_H

#include "Player.h"

class CHASS : public Player {
    public:
        CHASS(int, int, int, const string&);
        virtual void intro();
};

#endif