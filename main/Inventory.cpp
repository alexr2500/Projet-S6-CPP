#include "Inventory.h"
#include <iostream>
using namespace std;

void Inventory::addItem(shared_ptr<Item> item) {
    itemList.push_back(item);
}

void Inventory::displayInventory() const {
    if (itemList.empty()) {
        cout << "  (Inventaire vide)" << endl;
        return;
    }
    for (const auto& item : itemList) {
        if (item->getQuantity() > 0)
            item->display();
    }
}

int Inventory::consumeItem(const string& itemName) {
    for (auto& item : itemList) {
        if (item->getName() == itemName && item->getQuantity() > 0) {
            return item->use();
        }
    }
    cout << "  Item '" << itemName << "' introuvable ou épuisé." << endl;
    return -1;
}

bool Inventory::isEmpty() const {
    for (const auto& item : itemList)
        if (item->getQuantity() > 0) return false;
    return true;
}

const vector<shared_ptr<Item>>& Inventory::getItems() const {
    return itemList;
}