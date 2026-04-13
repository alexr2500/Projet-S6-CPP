#include "Sheriff.h"
#include <iostream>
#include <random>
using namespace std;

Sheriff::Sheriff(string name, int hpCurrent, int hpMax) : Entity(name, hpCurrent, hpMax)
{
    this->killsCount = 0;
    this->sparedCount = 0;
    this->victoriesCount = 0;
}

void Sheriff::attack(Entity& target)
{
    // Mise en place de l'al�atoire
    random_device rd;
    mt19937 gen(rd());

    // La distribution va de 0 aux HP maximum de la cible
    uniform_int_distribution<> distrib(0, target.getHpMax());

    // Tirage des d�g�ts
    int damage = distrib(gen);

    cout << "\n*** " << this->getName() << " degaine et tire sur " << target.getName() << " ! ***\n";

    if (damage == 0)
    {
        cout << "-> RATE ! " << target.getName() << " a esquive le tir de justesse.\n";
    }
    else
    {
        target.takeDamage(damage);

        double damageRatio = (double)damage / target.getHpMax();

        if (damageRatio < 0.25) 
        {
            cout << "-> Eraflure. (" << damage << " degats infliges).\n";
        }
        else if (damageRatio < 0.70)
        {
            cout << "-> En plein dans le mille ! (" << damage << " degats infliges).\n";
        }
        else
        {
            cout << "-> COUP CRITIQUE ! C'est devastateur ! (" << damage << " degats infliges) !!!\n";
        }

        cout << "Il reste " << target.getHpCurrent() << " HP a " << target.getName() << ".\n";
    }
}


int Sheriff::getKillsCount() const 
{
    return killsCount; 
}
int Sheriff::getSparedCount() const 
{
    return sparedCount;
}
int Sheriff::getVictoriesCount() const 
{
    return victoriesCount;
}

void Sheriff::addKill() 
{
    this->killsCount++;
}
void Sheriff::addSpared() 
{
    this->sparedCount++;
}
void Sheriff::addVictory() 
{
    this->victoriesCount++;
}



void Sheriff::act(Cowboy& target, string actId)
{
    // A compl�ter plus tard
}

void Sheriff::mercy(Cowboy& target)
{
    // A compl�ter plus tard
}