#include "GameManager.h"
#include "Sheriff.h"
#include "Cowboy.h"
#include "NormalCowboy.h"
#include "MiniBossCowboy.h"
#include "BossCowboy.h"
#include "Inventory.h"
#include <vector>
#include <iostream>

GameManager::GameManager() {
    Sheriff player;
    vector<Cowboy*> cowboys;
    vector<string> availableActs;
}

void GameManager::init(Inventory inventory, string nom_sheriff, int hpCurrent, int hpMax) {
    this->player = Sheriff(inventory, nom_sheriff, hpCurrent, hpMax);

    this->cowboys;
    this->availableActs = {"Attaquer", "Défendre", "Regénérer", "Attaque spéciale", "Inventaire"};

    for (int i = 1; i <= 10; i++) {

        if (i <= 6) {
            cowboys.push_back(new NormalCowboy("Cowboy_" + to_string(i), 50 + i*10, 50 + i*10, 10 + i*2, 5, 0, 100, availableActs));
        }
        else if (i <= 9) {
            cowboys.push_back(new MiniBossCowboy("MiniBoss_" + to_string(i), 100 + i*20, 100 + i*20, 20 + i*3, 10 + i*2, 200, 200, availableActs));
        }
        else {
            cowboys.push_back(new BossCowboy("BOSS_FINAL", 300, 300, 30 + i*5, 20 + i*3, 300, 300, availableActs));
        }
    }
}

void GameManager::run() {
    cout << endl;
    bool playerBattu = false;
    bool alterner = rand() % 2;

    for (int i = 0; i < 10; i++)
    {
        cout << "___________________________________________________________________________" << endl;
        cout << "Combat N° " << i + 1 << " contre " << cowboys[i]->getName() << "." << endl;
        cout << endl;

        while (player.getHpCurrent() > 0 && cowboys[i]->getHpCurrent() > 0)
        {
            cout << "\033[33m" << player.getName() << " Santé: " << player.getHpCurrent() << "    " << "\033[31m" << cowboys[i]->getName() << " Santé: " << cowboys[i]->getHpCurrent() << "\033[0m" << endl;
            cout << endl;

            if (alterner == false)
            {
                cout << "C'est au tour de " << player.getName() << endl;
                cout << "Choisir une action: " << end;
                for (int i = 0; i < availableActs.size(); i++) {
                    cout << i + 1 << ". " << availableActs[i] << "   ";
                }
                cout << endl;

                int choix = 0;
                cin >> choix;
                while (choix < 1 || choix > 6)
                {
                    cout << "Choisissez parmi les choix proposés." << endl;
                    cin >> choix;
                }

                switch (choix) {
                    case 1:
                        break;
                    case 2:
                        break;
                    case 3:
                        break;
                    case 4:
                        break;
                    case 5:
                        break;
                    default:
                        break;
                }
            }
            else 
            {
                cout << "C'est au tour de " << cowboys[i]->getName() << endl;
            }
        }
    }
}

void GameManager::end() {

}