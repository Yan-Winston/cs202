#include "fruits.h"

fruits::fruits(){
    expire = 3;
    needsPrep = true;
}
fruits::fruits(bool  needPrep, string newName, date& bestDate): food(newName, bestDate){
    setNeedsPrep(needPrep);
    setFoodName(newName);
    setBestByDate(bestDate);
    expire = 3;
} 
fruits::fruits(const fruits& old){
    setNeedsPrep(old.needsPrep);
    setFoodName(old.name);
    bestBy = old.bestBy;
    expire = 3;
}

void fruits::setNeedsPrep(bool prep){
    needsPrep = prep;
}

bool fruits::getNeedsPrep(){
    return needsPrep;
}
