#include <iostream>
using namespace std;
#ifndef AFFICHAGE_H
#define AFFICHAGE_H

void afficher_intro(void) {
    cout << "\x1b[33m" << endl;
    cout << "ALTERDUNE - Western" << endl;
    cout << "Nous sommes en 1897, dans l'état du Texas. Le cowboy Luke Dawson" << endl;
    cout << "et son groupe de 5 aventuriers traversent un désert aride afin de" << endl;
    cout << "traquer les Blackwoods, un groupe de 10 hors-la-loi très recherchés." << endl;
    cout << "Equipez-vous, voyagez, et affrontez-les à la moindre rencontre pour" << endl;
    cout << "remporter leurs trésors volés" << endl;
    cout << "\x1b[0m" << endl;
}

void afficher_carte(void) {
    cout << "                        __.            ,,\"-.             _,....           \n";
    cout << "       ,---b         ,-''' '.__       .''   ''`--'''`..--''    ';.         \n";
    cout << "      /     |.      /'  .      `\\_ ,_.-   ~  CASCADES WICHITA    |         \n";
    cout << "     |'     ` ._   |    .        ''        ~  ~ ~     X            ;.        \n";
    cout << "    ,/     .   ''|_|  .   ▒▒▒▒▒▒▒▒▒▒▒▒       ~  ~  ~  ║    .   .     '-. __.  \n";
    cout << " /-''   ☼              ▒▒▒▒LAC ROSE▒▒▒            ╔═══╝         .       '  ;  \n";
    cout << "/  DESERT DE  ☼    .     ▒▒▒▒▒▒▒▒▒▒▒     .        ║     .       ■ ■   ■  ■ ';.\n";
    cout << "|  ☼ CACTUS  ☼         .      X           ╔═══════╩═════════X  ■   DALLAS   |\n";
    cout << "''| b_  ☼     ╔═══════════════╩═══╗  .    ║                      ■   ■  ■   |\n";
    cout << "   '☼     ☼   ║    .       .      ╚══════╦╝    ¤      ¤      .       ■  ■   ,'\n";
    cout << "  ,/'         ║       .      ,___        ║   ¤  ¤  ¤ ¤  ¤        .          |' \n";
    cout << " /'     X═════╝   .        /''  ';.      X  ¤   BROWNWOOD  ¤          .   J  \n";
    cout << " |  MIDLAND          .  ,/'      `._    _   ¤  ¤  ¤ ¤        .          /'  \n";
    cout << " '|-__,,.--.-.        ,,-          '''''''-...   ¤     ¤___   ,,--....|   \n";
    cout << "     ''      ''`-..Y-''                      `...- ...-''  ''''           \n";
    cout << "Prix des trains:" << endl;
    cout << "[1 - MIDLAND : 2$] [2 - BROWNWOOD : 2$] [3 - CASCADES WICHITA : 3$] [4 - DALLAS : 4$] [5 - LAC ROSE : 1.5$]" << endl;
    cout << "Le voyage vers [6 - DESERT DE CACTUS] se fait gratuitement à cheval." << endl;
    cout << "Voyage choisi:" << endl;
    cout << endl;
}

void afficher_interface_jeu(bool rencontre, string lieu)
{
    cout << endl;
    cout << "Position actuelle: " << lieu << endl;
    cout << "Points de vie: " << endl;

    cout << "[1 - VOYAGER] [2 - BOUTIQUE] [3 - INVENTAIRE]" << endl;
}

#endif