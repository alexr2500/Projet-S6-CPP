#include "BossCowboy.h"

#include <iostream>
#include<vector>
using namespace std;

// on transmet a Cowboy
BossCowboy::BossCowboy(string name, int hpCurrent, int hpMax, int attackStat, int defenseStat, int currentMercy, int mercyGoal, vector<string> availableActs)
    : Cowboy(name, hpCurrent, hpMax, attackStat, defenseStat, currentMercy, mercyGoal, availableActs)
{
    //nada normalement
}

// Polymorphisme : renvoie 2
int BossCowboy::getActCapacity() const {
    return 2;
}