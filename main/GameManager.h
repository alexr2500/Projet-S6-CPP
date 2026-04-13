#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H
#include "Sheriff.h"
#include "Inventory.h"
#include <vector>
#include <iostream>

class GameManager {
    private:
        Sheriff player;
        Inventory inventory;
        vector<Cowboy*> cowboys;
        vector<string> availableActs;
    public:
        GameManager();

        void init(Inventory inventory, string nom_sheriff, int hpCurrent, int hpMax);
        void run();
        void end();
};

#endif