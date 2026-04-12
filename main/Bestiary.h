#ifndef BESTIARY_H
#define BESTIARY_H

#include <vector>
#include <iostream>
using namespace std;

#include "Cowboy.h"


//Struct permet d'associer de mani�re ins�parable un ennemi vaincu avec le r�sultat exact de son affrontement
struct BestiaryEntry {
    // Premier compratiment, il stocke l'objet complet de l'ennemi
    Cowboy cowboy;
 
    // Deuxi�me compartiment, true = �pargn�, false = tu�
    bool wasSpared;
};
// Une petite structure pour lier l'ennemi vaincu � son sort

class Bestiary {
private:
    vector<BestiaryEntry> entries; // Liste des rencontres

public:
    Bestiary();

    void addEntry(Cowboy c, bool wasSpared);

    void displayBestiary() const;
};

#endif