#include "car.h"

Car::Car() {
    year = 0;
    make = "";
    model = "";
}
Car::Car(int y, string ma, string mo) {
    year = y;
    make = ma;
    model = mo;
}
Car::Car(const Car& copy) {
    year = copy.year;
    make = copy.make;
    model = copy.model;
}

int Car::getYear() const {
    return year;
}
string Car::getMake() const {
    return make;
}
string Car::getModel() const {
    return model;
}

void Car::setYear(int y) {
    year = y;
}
void Car::setMake(string ma) {
    make = ma;
}
void Car::setModel(string mo) {
    model = mo;
}

void Car::print() {
    cout << year << " " << make << " " << model << endl;
}