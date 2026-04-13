#ifndef BOSSCOWBOY_H
#define BOSSCOWBOY_H

#include <iostream>
#include<vector>
using namespace std;

#include "Cowboy.h"

class BossCowboy : public Cowboy {
public:
    // M�mes para que Cowboy
    BossCowboy(string name, int hpCurrent, int hpMax, int attackStat, int defenseStat, int currentMercy, int mercyGoal, vector<string> availableActs);

    // On red�f (override) la capacit� d'action
    int getActCapacity() const;
};

#endif