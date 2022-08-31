#include "fridge.h"

fridge::fridge() {
    fruitNum = 0;
    condimentNum = 0;
}
fridge::fridge(int fn, int cn) {
    fruitNum = fn;
    condimentNum = cn;
}
fridge::fridge(const fridge& copy) {
    fruitNum = copy.fruitNum;
    condimentNum = copy.condimentNum;
    for (int i = 0; i < fruitNum; i++) {
        fbin[i] = copy.fbin[i];
    }
    for (int i = 0; i < condimentNum; i++) {
        cbin[i] = copy.cbin[i];
    }
}

int fridge::getNumFruits() {return fruitNum;}
int fridge::getNumCondiments() {return condimentNum;}

fruits* fridge::getFruitBin() {return fbin;}
condiments* fridge::getCondimentBin() {return cbin;}

void fridge::addFruitToFridge(fruits f) {
    fbin[fruitNum] = f;
    fruitNum += 1;
}
void fridge::addCondimentToFridge(condiments c) {
    cbin[condimentNum] = c;
    condimentNum += 1;
}