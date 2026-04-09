#ifndef BESTIARY_H
#define BESTIARY_H

#include <vector>
#include <iostream>
using namespace std;

#include "Cowboy.h"


//Struct permet d'associer de manière inséparable un ennemi vaincu avec le résultat exact de son affrontement
struct BestiaryEntry {
    // Premier compratiment, il stocke l'objet complet de l'ennemi
    Cowboy cowboy;
 
    // Deuxième compartiment, true = épargné, false = tué
    bool wasSpared;
};
// Une petite structure pour lier l'ennemi vaincu à son sort

class Bestiary {
private:
    vector<BestiaryEntry> entries; // Liste des rencontres

public:
    Bestiary();

    void addEntry(Cowboy c, bool wasSpared);

    void displayBestiary() const;
};

#endif