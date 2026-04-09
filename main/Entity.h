#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
using namespace std;

class Entity
{
private:
    std::string name;
    int hpCurrent;
    int hpMax;

public:
    Entity(string name, int hpCurrent, int hpMax);

    virtual ~Entity() = default;

    virtual void attack(Entity& target) = 0;

    void takeDamage(int amount);
    bool isDead() const;

    void setName(string name);
    void setHpCurrent(int hpCurrent);
    void setHpMax(int hpMax);

    string getName() const;
    int getHpCurrent() const;
    int getHpMax() const;
};

#endif