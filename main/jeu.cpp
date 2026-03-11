#include <iostream>
using namespace std;
#include "jeu.h"
#include "items.h"

void jeu_init(void)
{
    Item potion("Potion de vie", 5, 25, 0);
    Item whisky("Whisky", 3.5, -5, 20);
    Item repas("Viande et purée", 2, 10, 5);
    Item café("Café", 1, 2, 4);
    Item biscuits("Biscuits", 1.5, 2, 0);
}