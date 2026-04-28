#include "Consommable.h"
#include <iostream>
using namespace std;

Consommable::Consommable(string name, int effectValue, int quantity)
    : Item(name, "Consommable", effectValue, quantity)  {}

int Consommable::use() {
    if (quantity <= 0) {
        cout << "  Plus de " << getName()<< " disponible !" << endl;
        return 0;
    }
    setQuantity(getQuantity() - 1);
    cout << "  Vous utilisez " << getName() << " (effet: " << effectValue << "). Reste: " << quantity << endl;
    return effectValue;
}

void Consommable::display() const {
    cout << "  [Consommable] " << getName() << " (effet: " << effectValue << ") x" << quantity << endl;
}