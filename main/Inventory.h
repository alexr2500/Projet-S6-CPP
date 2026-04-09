#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include <string>
#include "Item.h"
#include <iostream>
using namespace std;

class Inventory {
private:
    vector<Item> itemList;

public:
    Inventory();

    void addItem(Item newItem);

    void displayInventory() const;

    int consumeItem(std::string itemName);
};

#endif