#include "Cat.h"

Cat::Cat(){
    breed = "badCat";
    age = -1;
    sex = ' ';
    cost = 00000000000;
    petType = "cat";
}

Cat::Cat(const Cat& copy){
    age = copy.getAge();
    sex = copy.getSex();
    breed = copy.getBreed();
    cost = copy.getCost();
    petType = copy.getPetType();
}
Cat::Cat(float newCost,int newAge, char newSex, string newBreed){
    cost = newCost;
    age = newAge;
    sex = newSex;
    breed = newBreed;
    petType = "cat";
}