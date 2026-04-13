#ifndef SHERIFF_H
#define SHERIFF_H

#include <iostream>
#include "Inventory.h"
using namespace std;

#include "Entity.h"
#include "Cowboy.h"
// #include "Inventory.h" // A d�commenter quand inventaire cr�er

class Sheriff : public Entity
{
private:
    Inventory inventory;
    int killsCount;
    int sparedCount;
    int victoriesCount;

public:
    Sheriff(string name, int hpCurrent, int hpMax);

    void attack(Entity& target) override;

    void act(Cowboy& target, string actId);
    void mercy(Cowboy& target);

    int getKillsCount() const;
    int getSparedCount() const;
    int getVictoriesCount() const;

    void addKill();
    void addSpared();
    void addVictory();
};

#endif