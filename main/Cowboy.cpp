#include "Cowboy.h"
#include "Entity.h"
#include <iostream>
using namespace std;

Cowboy::Cowboy(int attackStat, int defenseStat, int currentMercy, int mercyGoal, vector<string> availableActs) {
    this->attackStat = attackStat;
    this->defenseStat = defenseStat;
    this->currentMercy = currentMercy;
    this->mercyGoal = mercyGoal;
    this->availableActs = availableActs;
}

void Cowboy::attack(Entity target) {
    
}

int Cowboy::getActCapacity() {
    

    return capa;
}

int Cowboy::getAttackStat() {
    return attackStat;
}

void Cowboy::setAttackStat(int as) {
    this->attackStat = as;
}

int Cowboy::getDefenseStat() {
    return defenseStat;
}

void Cowboy::setDefenseStat(int ds) {
    this->defenseStat = ds;
}

int Cowboy::getCurrentMercy() {
    return currentMercy;
}

void Cowboy::setCurrentMercy(int cm) {
    currentMercy = cm;
}

int Cowboy::getMercyGoal() {
    return mercyGoal;
}

void Cowboy::setMercyGoal(int mg) {
    mercyGoal = mg;
}

vector<string> Cowboy::getAvailableActs() {
    return availableActs;
}

void Cowboy::setAvailableActs(vector<string> aa) {
    availableActs = aa;
}