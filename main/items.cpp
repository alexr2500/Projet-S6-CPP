#include <iostream>
using namespace std;
#include "items.h"

Item::Item(string n, float p, int pv, int energie) {
    nom = n;
    prix = p;
    effet_pv = pv;
    effet_énergie = energie;
}