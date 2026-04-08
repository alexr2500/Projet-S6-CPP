#ifndef ITEM_H
#define ITEM_H
#include <iostream>
using namespace std;

class Item {
    private:
        string name;
        string type;
        int healValue;
        int quantity;
    public:
        Item (string name, string type, int heatValue, int quantity);
        void use();

        string getName();
        void setName(string n);

        string getType();
        void setType(string t);

        int getHealValue();
        void setHealValue(int hv);

        int getQuantity();
        void setQuantity(int q);
};

#endif ITEM_H