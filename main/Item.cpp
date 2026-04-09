#include <iostream>>
#include "Item.h"
using namespace std;

Item::Item(string name, string type, int healValue, int quantity) {
    this->name = name;
    this->type = type;
    this->healValue = healValue;
    this->quantity = quantity;
}

int Item::use() {
    if (this->quantity <= 0) {
        cout << "Vous avez epuise l'item " << this->name << "." << endl;
        return 0; // Aucun soin n'est appliqué
    }
    else {
        cout << "Vous consommez : " << this->name << ". Vous regagnez " << this->healValue << " HP." << endl;
        this->quantity--;
        return this->healValue; // On renvoie la valeur du soin
    }
}

string Item::getName() const {
    return name;
}

void Item::setName(string n) {
    this->name = n;
}

string Item::getType() const {
    return type;
}

void Item::setType(string t) {
    this->type = t;
}

int Item::getHealValue() const {
    return healValue;
}

void Item::setHealValue(int hv) {
    this->healValue =  hv;
}

int Item::getQuantity() const {
    return quantity;
}

void Item::setQuantity(int q) {
    this->quantity = q;
}