#include "person.h"

Person::Person() {
    firstName = "constructus";
    lastName = "incorrectus";
}
Person::Person(std::string fn, std::string ln) {
    firstName = fn;
    lastName = ln;
}
Person::Person(const Person& copy) {
    firstName = copy.firstName;
    lastName = copy.lastName;
}

void Person::setFirstName(const std::string fn) {
    firstName = fn;
}
void Person::setLastName(const std::string ln) {
    lastName = ln;
}

std::string Person::getFirstName() {
    return firstName;
}
std::string Person::getLastName() {
    return lastName;
}

void Person::print() {
    std::cout << firstName << " " << lastName << std::endl;
}