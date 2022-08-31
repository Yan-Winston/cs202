#include "Dog.h"

Dog::Dog(){
    breed = "badDog";
    age = -42;
    sex = ' ';
    cost = 111111;
    petType = "dog";
}

Dog::Dog(const Dog& copy){
    age = copy.getAge();
    sex = copy.getSex();
    breed = copy.getBreed();
    cost = copy.getCost();
    petType = copy.getPetType();
}
Dog::Dog(float newCost,int newAge, char newSex, string newBreed){
    cost = newCost;
    age = newAge;
    sex = newSex;
    breed = newBreed;
    petType = "dog";
}