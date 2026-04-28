#pragma once
#include "Item.h"

class Consommable : public Item {
private:
    int effectValue;

public:
    Consommable(std::string name, int effectValue, int quantity);

    int use() override;

    void display() const override;
};