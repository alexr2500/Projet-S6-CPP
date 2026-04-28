#pragma once
#include "Item.h"
#include <vector>
#include <memory>
#include <string>

class Inventory {
private:
    std::vector<std::shared_ptr<Item>> itemList;

public:
    Inventory() = default;

    void addItem(std::shared_ptr<Item> item);

    // Affiche tous les items (polymorphisme : appelle display() de chaque sous-classe)
    void displayInventory() const;

    // Utilise un item par son nom : retourne l'effet (PV ou dégâts), -1 si introuvable
    int consumeItem(const std::string& itemName);

    bool isEmpty() const;
    const std::vector<std::shared_ptr<Item>>& getItems() const;
};
