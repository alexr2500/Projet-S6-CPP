#include "GameManager.h"
#include "Sheriff.h"
#include "Cowboy.h"
#include "NormalCowboy.h"
#include "MiniBossCowboy.h"
#include "BossCowboy.h"
#include <iostream>

GameManager::GameManager() {

}

void GameManager::init(string nom_sheriff, int hpCurrent, int hpMax) {
    Sheriff player(nom_sheriff, hpCurrent, hpMax);

    
}

void GameManager::run() {

}

void GameManager::end() {

}