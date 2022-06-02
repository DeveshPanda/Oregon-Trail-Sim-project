#ifndef CNAS_H
#define CNAS_H

#include "Player.h"

class CNAS : public Player {
    public:
        CNAS(int, int, int, const string&);
        virtual void intro();
};

#endif