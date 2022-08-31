#ifndef FRIDGE_H
#define FRIDGE_H

#define MAX_BIN_CAPACITY 10

#include "fruits.h"
#include "condiments.h"

class fridge {
    private:
        fruits fbin[MAX_BIN_CAPACITY];
        int fruitNum;

        condiments cbin[MAX_BIN_CAPACITY];
        int condimentNum;

    public:
        fridge();
        fridge(int fn, int cn);
        fridge(const fridge& copy);

        int getNumFruits();
        int getNumCondiments();

        fruits* getFruitBin();
        condiments* getCondimentBin();

        void addFruitToFridge(fruits f);
        void addCondimentToFridge(condiments c);
};

#endif