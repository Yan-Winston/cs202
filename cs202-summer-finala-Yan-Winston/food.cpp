#include "food.h"
food::food(){
    date defaultDay(-1, -1, 1);
    setBestByDate(defaultDay);
    setFoodName("Rump Roast");
}
food::food(string newName, date& bestBy){
    setFoodName(newName);
    setBestByDate(bestBy);
}
food::food(const food& old){
    setFoodName(old.name);
    bestBy = old.bestBy;
}

void food::setBestByDate(date& d){
    bestBy = d;
}

date food::getBestByDate(){
    return bestBy;
}

void food::setFoodName(string foodName){
    name = foodName;
}

string food::getFoodName(){
    return name;
}

int food::checkIfSafeToEat(date d) {
    return (bestBy.calculateDays() + expire) - d.calculateDays();
}