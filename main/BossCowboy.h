#ifndef BOSSCOWBOY_H
#define BOSSCOWBOY_H

#include <iostream>
#include<vector>
using namespace std;

#include "Cowboy.h"

class BossCowboy : public Cowboy {
public:
    // Mêmes para que Cowboy
    BossCowboy(string name, int hpCurrent, int hpMax, int attackStat, int defenseStat, int currentMercy, int mercyGoal, vector<string> availableActs);

    // On redéf (override) la capacité d'action
    int getActCapacity() const override;
};

#endif