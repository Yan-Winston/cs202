// By: Winston Yan
// On: 6/1/2022
//For: CS 202 Assignment 5

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

int Person::getNumCourses() {
    return numCourses;
}

float Person::getMoney() {
    return money;
}

bool Person::addCourse(const Course newCourse) {
    bool passed = false;
    try {
        if (numCourses <= 4) {
            courses[numCourses] = newCourse;
            passed = true;
        } else {
            throw std::invalid_argument("theres no way you added this many courses :skull:\n");
        }
    } catch (std::exception e) {
        return false;
    }
    
    return passed;
}

void Person::print() {
    std::cout << firstName << " " << lastName << std::endl;
}