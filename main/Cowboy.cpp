#include "Cowboy.h"
#include <iostream>

using namespace std;

Cowboy::Cowboy(string name, int hpCurrent, int hpMax, int attackStat, int defenseStat, int currentMercy, int mercyGoal, vector<string> availableActs)
    : Entity(name, hpCurrent, hpMax)
{
    this->attackStat = attackStat;
    this->defenseStat = defenseStat;
    this->currentMercy = currentMercy;
    this->mercyGoal = mercyGoal;
    this->availableActs = availableActs;
}

void Cowboy::attack(Entity& target) {
    // Al�atoire � faire, comme pour le Sheriff
    cout << this->getName() << " attaque " << target.getName() << " !" << endl;
}

int Cowboy::getActCapacity() const {
    //à faire
    int capa = 0;

    return capa;
}

int Cowboy::getAttackStat() const {
    return attackStat;
}

void Cowboy::setAttackStat(int as) {
    this->attackStat = as;
}

int Cowboy::getDefenseStat() const {
    return defenseStat;
}

void Cowboy::setDefenseStat(int ds) {
    this->defenseStat = ds;
}

int Cowboy::getCurrentMercy() const {
    return currentMercy;
}

void Cowboy::setCurrentMercy(int cm) {
    this->currentMercy = cm;
}

int Cowboy::getMercyGoal() const {
    return mercyGoal;
}

void Cowboy::setMercyGoal(int mg) {
    this->mercyGoal = mg;
}

vector<string> Cowboy::getAvailableActs() const {
    return availableActs;
}

void Cowboy::setAvailableActs(vector<string> aa) {
    this->availableActs = aa;
}