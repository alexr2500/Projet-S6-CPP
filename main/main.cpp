#include <iostream>
#include "Sheriff.h"
#include "GameManager.h"
using namespace std;

int main(void) {
    system("chcp 65001"); //permet d'afficher correctement les charactères ASCII

    string nom_sheriff = "";
    cout << "Choisissez un nom de sheriff:" << endl;
    cin >> nom_sheriff;

    int hpCurrent = 100;
    int hpMax = 100;
    Sheriff player(nom_sheriff, hpCurrent, hpMax);

    GameManager game;
    game.init(nom_sheriff, hpCurrent, hpMax);
    game.run();
    game.end();

    return 0;
}