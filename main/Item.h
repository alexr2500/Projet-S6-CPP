#ifndef ITEM_H
#define ITEM_H
#include <iostream>
using namespace std;

class Item {
    protected:
        string name;
        string type;
        int healValue;
        int quantity;
    public:
        Item (string name, string type, int healValue, int quantity);
        virtual void display() const;
        virtual int use() = 0; 

        string getName() const;
        void setName(string n);

        string getType() const;
        void setType(string t);

        int getHealValue() const;
        void setHealValue(int hv);

        int getQuantity() const;
        void setQuantity(int q);
};

#endif