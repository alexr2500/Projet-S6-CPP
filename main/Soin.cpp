#include "Soin.h"
#include <iostream>
using namespace std;

Soin::Soin(string name, int healValue, int quantity)
    : Item(name, "Soin", healValue, quantity) {}

int Soin::use() {
    if (quantity <= 0) {
        cout << "  Plus de " << getName() << " disponible !" << endl;
        return 0;
    }
    setQuantity(getQuantity() - 1);
    cout << "  Vous utilisez " << getName() << " (+PV: " << healValue << "). Reste: " << quantity << endl;
    return healValue;
}

void Soin::display() const {
    cout << "  [Soin] " << getName() << " (+" << healValue << " PV) x" << quantity << endl;
}