#ifndef MINIBOSSCOWBOY_H
#define MINIBOSSCOWBOY_H

#include <iostream>
#include<vector>
using namespace std;

#include "Cowboy.h"

class MiniBossCowboy : public Cowboy {
public:
    // Mêmes para que Cowboy
    MiniBossCowboy(string name, int hpCurrent, int hpMax, int attackStat, int defenseStat, int currentMercy, int mercyGoal, vector<string> availableActs);

    // On redéf (override) la capacité d'action
    int getActCapacity() const override;
};

#endif