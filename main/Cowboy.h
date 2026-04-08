#ifndef COWBOY_H
#define COWBOY_H
#include <iostream>
#include <vector>
#include "Entity.h"
using namespace std;

class Cowboy {
    private:
        int attackStat;
        int defenseStat;
        int currentMercy;
        int mercyGoal;
        vector<string> availableActs;
    public:
        Cowboy (int attackStat, int defenseStat, int currentMercy, int mercyGoal, vector<string> availableActs);
        void attack(Entity target);
        int getActCapacity();

        int getAttackStat();
        void setAttackStat();

        int getDefenseStat();
        void setDefenseStat();

        int getCurrentMercy();
        void setCurrentMercy();

        int getMercyGoal();
        void setMercyGoal();

        vector<string> getAvailableActs();
        void addAvailableActs();
};

#endif COWBOY_H