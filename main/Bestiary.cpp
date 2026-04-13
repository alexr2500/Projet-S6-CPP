#include "Bestiary.h"

using namespace std;

Bestiary::Bestiary() {
    // nada
}

void Bestiary::addEntry(Cowboy c, bool wasSpared) {
    BestiaryEntry newEntry = { c, wasSpared };
    this->entries.push_back(newEntry);
}

void Bestiary::displayBestiary() const {
    cout << "\n=== CARNET DE CHASSE (BESTIAIRE) ===" << endl;

    if (this->entries.empty()) {
        cout << "Aucun hors-la-loi n'a encore croisé votre route." << endl;
        cout << "====================================" << endl;
        return;
    }

    for (size_t i = 0; i < entries.size(); i++) {
        cout << "- " << entries[i].cowboy.getName()
            << " | HP Max: " << entries[i].cowboy.getHpMax()
            << " | ATK: " << entries[i].cowboy.getAttackStat()
            << " | DEF: " << entries[i].cowboy.getDefenseStat();

        if (entries[i].wasSpared) {
            cout << " -> [ EPARGNE ]" << endl;
        }
        else {
            cout << " -> [ ELIMINE ]" << endl;
        }
    }
    cout << "====================================" << endl;
}