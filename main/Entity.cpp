#include "Entity.h"

#include <iostream>
using namespace std;

Entity::Entity(string name, int hpCurrent, int hpMax)
{
    this->name = name;
    this->hpCurrent = hpCurrent;
    this->hpMax = hpMax;
}

void Entity::takeDamage(int amount)
{
    this->hpCurrent -= amount;

    if (this->hpCurrent < 0)
    {
        this->hpCurrent = 0;
    }
}

bool Entity::isDead() const
{
    return this->hpCurrent <= 0;
}

void Entity::setName(string name)
{
    this->name = name;
}
void Entity::setHpCurrent(int hpCurrent)
{
    this->hpCurrent = hpCurrent;
}
void Entity::setHpMax(int hpMax)
{
    this->hpMax = hpMax;
}

string Entity::getName() const
{
    return name;
}
int Entity::getHpCurrent() const
{
    return hpCurrent;
}
int Entity::getHpMax() const
{
    return hpMax;
}