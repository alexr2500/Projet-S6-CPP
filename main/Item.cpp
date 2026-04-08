#include <iostream>>
#include "Item.h"
using namespace std;

Item::Item(string name, string type, int healValue, int quantity) {
    this->name = name;
    this->type = type;
    this->healValue = healValue;
    this->quantity = quantity;
}

void Item::use() {
    if (quantity == 0) {
        cout << "Vous avez épuisé l'item " << name << "." << endl;
    }
    else
    {
        cout << "Vous avez utilisé l'item " << name << ", vous gagnez " <<  healValue << " points de vie." << endl;
        quantity--;
    }
}

string Item::getName() {
    return name;
}

void Item::setName(string n) {
    name = n;
}

string Item::getType() {
    return type;
}

void Item::setType(string t) {
    type = t;
}

int Item::getHealValue() {
    return healValue;
}

void Item::setHealValue(int hv) {
    healValue =  hv;
}

int Item::getQuantity() {
    return quantity;
}

void Item::setQuantity(int q) {
    quantity = q;
}