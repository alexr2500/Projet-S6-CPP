#ifndef INVENTORY_H
#define INVENTORY_H
#include <iostream>
#include "Item.h"
#include <vector>

class Inventory {
    private:
        vector<Item> itemList;
    public:
        Inventory(vector<Item> itemList);

        void displayInventory();
        void consumeItem(string name);
};

#endif