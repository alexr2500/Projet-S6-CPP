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
    // Aléatoire à faire, comme pour le Sheriff
    cout << this->getName() << " attaque " << target.getName() << " !" << endl;
}

<<<<<<< HEAD
int Cowboy::getActCapacity() {
    

    return capa;
=======
int Cowboy::getActCapacity() const {
    // La classe de base Cowboy peut renvoyer 0 ou une valeur par défaut. 
    // Ce sera remplacé par 2, 3 ou 4 dans NormalCowboy, MinibossCowboy et BossCowboy.
    return 0;
>>>>>>> 17d800e3a99785a0ede1da6fb0af4ce02da08e48
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