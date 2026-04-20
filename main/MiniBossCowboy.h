#ifndef MINIBOSSCOWBOY_H
#define MINIBOSSCOWBOY_H

#include <iostream>
#include<vector>
using namespace std;

#include "Cowboy.h"

class MiniBossCowboy : public Cowboy {
public:
    // M�mes para que Cowboy
    MiniBossCowboy(string name, int hpCurrent, int hpMax, int attackStat, int defenseStat, int currentMercy, int mercyGoal, vector<string> availableActs);

    // On red�f (override) la capacit� d'action
    int getActCapacity() const;
};

#endif