#ifndef COWBOY_H
#define COWBOY_H

#include <vector>
#include <string>
#include "Entity.h"
#include <iostream>
using namespace std;

class Cowboy : public Entity {
private:
    int attackStat;
    int defenseStat;
    int currentMercy;
    int mercyGoal;
    vector<string> availableActs;

public:
    Cowboy(string name, int hpCurrent, int hpMax, int attackStat, int defenseStat, int currentMercy, int mercyGoal, std::vector<std::string> availableActs);

    void attack(Entity& target) override;

    void addMercy(int amount);

    int getActCapacity() const;

    int getAttackStat() const;
    void setAttackStat(int as);

    int getDefenseStat() const;
    void setDefenseStat(int ds);

    int getCurrentMercy() const;
    void setCurrentMercy(int cm);

    int getMercyGoal() const;
    void setMercyGoal(int mg);

    vector<string> getAvailableActs() const;
    void setAvailableActs(vector<string> aa);
};

#endif