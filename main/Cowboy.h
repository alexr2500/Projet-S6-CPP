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
    std::vector<std::string> availableActs;

public:
    Cowboy(std::string name, int hpCurrent, int hpMax, int attackStat, int defenseStat, int currentMercy, int mercyGoal, std::vector<std::string> availableActs);

    void attack(Entity& target) override;

    virtual int getActCapacity() const;

    int getAttackStat() const;
    void setAttackStat(int as);

    int getDefenseStat() const;
    void setDefenseStat(int ds);

    int getCurrentMercy() const;
    void setCurrentMercy(int cm);

    int getMercyGoal() const;
    void setMercyGoal(int mg);

    std::vector<std::string> getAvailableActs() const;
    void setAvailableActs(std::vector<std::string> aa);
};

#endif