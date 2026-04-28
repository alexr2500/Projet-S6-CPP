#pragma once
#include "Item.h"

class Soin : public Item {
private:
    int healValue;  // points de vie restaurés

public:
    Soin(std::string name, int healValue, int quantity);

    int use() override;

    void display() const override;
};