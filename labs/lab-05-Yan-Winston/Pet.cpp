#include "Pet.h"


using namespace std;

Pet::Pet() {
    age = 0;
    sex = '/';
    breed = "a very pet-y pet";
    cost = 0.99;
    petType = "pet";
}
Pet::Pet(int a, char s, std::string b, double c) {
    age = a;
    sex = s;
    breed = b;
    cost = c;
    petType = "pet";
}
Pet::Pet(const Pet& copy){
    age = copy.age;
    sex = copy.sex;
    breed = copy.breed;
    cost = copy.cost;
    petType = copy.petType;
}


float Pet::getCost() const {
    return cost;
}
void Pet::setCost(const float newCost) {
    cost = newCost;
}

int Pet::getAge() const {
    return age;
}
void Pet::setAge(const int newAge){
    age = newAge;
}
string Pet::getBreed() const {
    return breed;
}
void Pet::setBreed(const string newBreed) {
    breed = newBreed;
}
char Pet::getSex() const {
    return sex;
}
void Pet::setSex(const char newSex) {
    sex = newSex;
}

std::string Pet::getPetType() const {
    return petType;
}

void Pet::setPetType(const std::string t) {
    petType = t;
}

void Pet::printPetInfo() {
    std::cout <<  "\n" << petType << "\nBreed: " << breed << "\nSex: " << sex << "\nAge(months): "<< age << "\nCost: $" << cost << std::endl;
}