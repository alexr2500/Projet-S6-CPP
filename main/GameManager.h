#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H
#include "Sheriff.h"
#include <iostream>

class GameManager {
    private:
        Sheriff player;
    public:
        GameManager();

        void init(string nom_sheriff, int hpCurrent, int hpMax);
        void run();
        void end();
};

#endif