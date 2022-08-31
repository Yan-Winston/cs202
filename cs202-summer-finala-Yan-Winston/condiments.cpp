#include "condiments.h"

condiments::condiments(){
    needsKnife = false;
    expire = 7;
}
condiments::condiments(bool knife, string newName, date& bestDate) :food(newName, bestDate){
    needsKnife = knife;
    name = newName;
    bestBy = bestDate;
    expire = 7;
}
condiments::condiments(const condiments& old){
    needsKnife = old.needsKnife;
    name = old.name;
    bestBy = old.bestBy;
    expire = 7;
}
bool condiments::getNeedsKnife(){
    return needsKnife;
}
void condiments::setNeedsKnife(bool knife){
    needsKnife = knife;
}
