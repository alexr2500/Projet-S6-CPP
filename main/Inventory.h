#ifndef INVENTORY_H
#define INVENTORY_H
<<<<<<< HEAD
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
=======

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
>>>>>>> 17d800e3a99785a0ede1da6fb0af4ce02da08e48
};

#endif