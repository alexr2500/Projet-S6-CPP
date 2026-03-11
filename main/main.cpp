#include <iostream>
using namespace std;
#include "affichage.h"

int main(void) {
    system("chcp 65001"); //permet d'afficher correctement les charactères ASCII

    afficher_intro();
    string nom_personnage = "";
    cout << "Choisissez un nom de cowboy:" << endl;
    cin >> nom_personnage;
    
    afficher_carte();

    return 0;
}