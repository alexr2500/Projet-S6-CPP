#include "GameManager.h"
#include "NormalCowboy.h"
#include "MiniBossCowboy.h"
#include "BossCowboy.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

GameManager::GameManager() {}

void GameManager::init(Inventory inventory, string nom_sheriff, int hpCurrent, int hpMax) {
    this->inventory = inventory;
    this->player = Sheriff(inventory, nom_sheriff, hpCurrent, hpMax);

    this->availableActs = {"attaquer", "parler", "menacer", "plaisanter", "mercy"};

    for (int i = 1; i <= 10; i++) {

        if (i <= 6) {
            cowboys.push_back(new NormalCowboy(
                "Cowboy_" + to_string(i),
                80, 80,
                10, 5,
                0, 100,
                availableActs
            ));
        }
        else if (i <= 9) {
            cowboys.push_back(new MiniBossCowboy(
                "MiniBoss_" + to_string(i),
                120, 120,
                15, 10,
                0, 150,
                availableActs
            ));
        }
        else {
            cowboys.push_back(new BossCowboy(
                "BOSS_FINAL",
                200, 200,
                25, 15,
                0, 200,
                availableActs
            ));
        }
    }
}

void GameManager::run() {
    srand(time(nullptr));

    for (Cowboy* enemy : cowboys) {

        cout << "\n==============================\n";
        cout << "Combat contre " << enemy->getName() << endl;

        while (!player.isDead() && !enemy->isDead()) {

            cout << "\n\033[33m" << player.getName() << " HP: " << player.getHpCurrent();
            cout << " |\033[31m " << enemy->getName() << " HP: " << enemy->getHpCurrent() << "\033[0m" << endl;

            // ===== TOUR JOUEUR =====
            cout << "\nActions disponibles:\n";
            for (int i = 0; i < availableActs.size(); i++) {
                cout << i + 1 << ". " << availableActs[i] << endl;
            }

            int choix;
            cin >> choix;

            while (choix < 1 || choix > availableActs.size()) {
                cout << "Choix invalide: ";
                cin >> choix;
            }

            string action = availableActs[choix - 1];

            if (action == "attaquer") {
                player.attack(*enemy);
            }
            else if (action == "mercy") {
                player.mercy(*enemy);
            }
            else {
                player.act(*enemy, action);
            }

            if (enemy->isDead()) {
                cout << enemy->getName() << " est mort.\n";
                player.addKill();
                break;
            }

            if (enemy->getCurrentMercy() >= enemy->getMercyGoal()) {
                cout << enemy->getName() << " est épargné.\n";
                player.addSpared();
                break;
            }

            // ===== TOUR ENNEMI =====
            cout << "\nTour de " << enemy->getName() << endl;
            enemy->attack(player);

            if (player.isDead()) {
                cout << "\nLe Sheriff est mort...\n";
                end();
                return;
            }
        }

        player.addVictory();
        cout << "Victoire !\n";
    }

    cout << "\nTous les ennemis sont vaincus !\n";
    end();
}

void GameManager::end() {
    for (Cowboy* c : cowboys) {
        delete c;
    }
    cowboys.clear();

    cout << "\nFin du jeu.\n";
}