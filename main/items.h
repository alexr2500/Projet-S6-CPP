#include <iostream>
using namespace std;
#ifndef ITEMS_H
#define ITEMS_H

class Item {
    public:
        string nom;
        float prix;
        int effet_pv;
        int effet_énergie;

    Item(string n, float p, int pv, int energie);
};

#endif