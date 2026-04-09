#include "Inventory.h"
#include <iostream>
using namespace std;

Inventory::Inventory() {
}

void Inventory::addItem(Item newItem) {
    this->itemList.push_back(newItem);
}

void Inventory::displayInventory() const {
    cout << "\n=== SAC A DOS DU MEILLEUR SHERIFF ===" << endl;

    if (this->itemList.empty()) {
        cout << "Votre inventaire est vide." << endl;
        return;
    }

    for (int i = 0; i < itemList.size(); i++) {
        cout << "- " << itemList[i].getName()
            << " (" << itemList[i].getType() << " : " << itemList[i].getHealValue() << " HP) "
            << "| Quantite : " << itemList[i].getQuantity() << endl;
    }
    cout << "============================" << endl;
}

int Inventory::consumeItem(string itemName) {
    for (int i = 0; i < itemList.size(); i++) {
        if (itemList[i].getName() == itemName) {
            return itemList[i].use();
        }
    }

    cout << "L'objet '" << itemName << "' n'est pas dans votre inventaire." << endl;
    return 0;
}