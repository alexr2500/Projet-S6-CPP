#include <iostream>
using namespace std;

int main(void) {
    system("chcp 65001"); //permet d'afficher correctement les charactères ASCII

    string nom_sheriff = "";
    cout << "Choisissez un nom de sheriff:" << endl;
    cin >> nom_sheriff;

    return 0;
}