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
        void setAttackStat(int as);

        int getDefenseStat();
        void setDefenseStat(int ds);

        int getCurrentMercy();
        void setCurrentMercy(int cm);

        int getMercyGoal();
        void setMercyGoal(int mg);

        vector<string> getAvailableActs();
        void setAvailableActs(vector<string> aa);
};

#endif COWBOY_H