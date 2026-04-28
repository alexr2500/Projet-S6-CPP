#include "GameManager.h"
#include "NormalCowboy.h"
#include "MiniBossCowboy.h"
#include "BossCowboy.h"
#include "Consommable.h"
#include "Soin.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

GameManager::GameManager() {}

void GameManager::init(Inventory inventory, string nom_sheriff, int hpCurrent, int hpMax) {
    this->inventory = inventory;
    this->player = Sheriff(inventory, nom_sheriff, hpCurrent, hpMax);

    this->availableActs = {"FIGHT", "ACT", "USE ITEM", "MERCY"};

    ifstream file("cowboys.csv");
    string line;

    getline(file, line);

    while (getline(file, line)) {
        stringstream ss(line);
        string type, name, val;
        vector<int> stats;

        getline(ss, type, ',');
        getline(ss, name, ',');

        while (getline(ss, val, ',')) {
            stats.push_back(stoi(val));
        }

    if (stats.size() >= 6) {
        if (type == "NormalCowboy") {
            cowboys.push_back(new NormalCowboy(name, stats[0], stats[1], stats[2], stats[3], stats[4], stats[5], availableActs));
        } 
        else if (type == "MiniBossCowboy") {
            cowboys.push_back(new MiniBossCowboy(name, stats[0], stats[1], stats[2], stats[3], stats[4], stats[5], availableActs));
        } 
        else if (type == "BossCowboy") {
            cowboys.push_back(new BossCowboy(name, stats[0], stats[1], stats[2], stats[3], stats[4], stats[5], availableActs));
        }
    }


    ifstream itemFile("items.csv");
    string itemLine;

    getline(itemFile, itemLine);

    while (getline(itemFile, itemLine)) {
        stringstream ss(itemLine);
        string type, name, val;
        vector<int> itemStats;

        getline(ss, type, ',');
        getline(ss, name, ',');

        while (getline(ss, val, ',')) {
            itemStats.push_back(stoi(val));
        }

        if (itemStats.size() >= 2) {
        int effectValue = itemStats[0];
        int quantity = itemStats[1];

        if (type == "Soin") {
            inventory.addItem(make_shared<Soin>(name, effectValue, quantity));
        } 
        else if (type == "Consommable") {
            inventory.addItem(make_shared<Consommable>(name, effectValue, quantity));
        }
    }

        
    }
    itemFile.close();

    this->player.getInventory() = this->inventory;
    }

    file.close();
}

void GameManager::run() {
    srand(time(nullptr));

    for (Cowboy* enemy : cowboys) {

        cout << "\n==============================\n";
        cout << "Combat contre " << enemy->getName() << endl;

        while (!player.isDead() && !enemy->isDead()) {
            cout << "------------------------------------------------" << endl;
            cout << "\n\033[33m" << player.getName() << " HP: " << player.getHpCurrent();
            cout << " |\033[31m " << enemy->getName() << " HP: " << enemy->getHpCurrent() << "\033[0m" << " Mercy: " << enemy->getCurrentMercy() << "/" << enemy->getMercyGoal() << endl;

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

            if (action == "FIGHT") {
                player.attack(*enemy);
            }

            else if (action == "ACT") {
                player.mercy(*enemy);
            }

            else if (action == "USE ITEM") {
                cout << "\033[33m── Inventaire ──\033[0m" << endl;
                player.getInventory().displayInventory();

                if (player.getInventory().isEmpty()) {
                    cout << "  Inventaire vide !" << endl;
                } else {
                    cout << "Quel item voulez-vous utiliser ? (Entrez le nom) : ";
                    string itemName;
                    cin.ignore();
                    getline(cin, itemName);

                    int result = player.getInventory().consumeItem(itemName);

                    if (result > 0) {
                        int newHp = player.getHpCurrent() + result;
                        
                        if (newHp > player.getHpMax()) {
                            newHp = player.getHpMax();
                        }
                        
                        player.setHpCurrent(newHp);
                        cout << "Soin appliqué ! Nouveaux HP : " << player.getHpCurrent() << "/" << player.getHpMax() << endl;
                    } else if (result == 0) {
                        cout << "L'item n'a eu aucun effet." << endl;
                    }
                }
            }

            else if (action == "MERCY") {
                
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

            cout << "------------------------------------------------" << endl;
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