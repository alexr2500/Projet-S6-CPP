#include "Inventory.h"
#include "Item.h"
#include <iostream>
#include <vector>

Inventory::Inventory(vector<Item> itemList) {
    this->itemList = itemList;
}

void Inventory::displayInventory() {
    cout << "Inventaire:" << endl;

    vector<Item> apparition;
    vector<int> frequence;

    for (int i = 0; i < itemList.size(); i++)
    {
        bool deja_present = false;
    }
}

void Inventory::consumeItem(string name) {
    
}

/*
    vector<char> ens_char;
    vector<int> frequence;

    for (size_t i = 0; i < s2.size(); i++)
    {
        

        for (size_t j = 0; j < ens_char.size(); j++)
        {
            if (s2[i] == ens_char[j])
            {
                deja_present = true;
                frequence[j]++;
                break;
            }
        }

        if (!deja_present)
        {
            ens_char.push_back(s2[i]);
            frequence.push_back(1);
        }
    }

    cout << "\nCaractères uniques et leurs fréquences:" << std::endl;
    for (size_t i = 0; i < ens_char.size(); i++)
    {
        cout << ens_char[i] << " : " << frequence[i] << std::endl;
    }
*/