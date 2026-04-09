#include "MiniBossCowboy.h"

#include <iostream>
#include<vector>
using namespace std;

// on transmet a Cowboy
MiniBossCowboy::MiniBossCowboy(string name, int hpCurrent, int hpMax, int attackStat, int defenseStat, int currentMercy, int mercyGoal, vector<string> availableActs)
    : Cowboy(name, hpCurrent, hpMax, attackStat, defenseStat, currentMercy, mercyGoal, availableActs)
{
    //nada normalement
}

// Polymorphisme : renvoie 2
int MiniBossCowboy::getActCapacity() const {
    return 2;
}