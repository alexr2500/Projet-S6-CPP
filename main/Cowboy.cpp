#include "Cowboy.h"
#include <iostream>
using namespace std;

Cowboy::Cowboy(int attackStat, int defenseStat, int currentMercy, int mercyGoal, vector<string> availableActs) {
    this->attackStat = attackStat;
    this->defenseStat = defenseStat;
    this->currentMercy = currentMercy;
    this->mercyGoal = mercyGoal;
    this->availableActs = availableActs;
}