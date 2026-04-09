#ifndef NORMALCOWBOY_H
#define NORMALCOWBOY_H

#include <iostream>
#include<vector>
using namespace std;

#include "Cowboy.h"

class NormalCowboy : public Cowboy {
public:
    // Mêmes para que Cowboy
    NormalCowboy(string name, int hpCurrent, int hpMax, int attackStat, int defenseStat, int currentMercy, int mercyGoal, vector<string> availableActs);

    // On redéf (override) la capacité d'action
    int getActCapacity() const override;
};

#endif