#include "course.h"

Course::Course() {
    prefix = "course";
    number = -1;
    name = "mc-coursey";
}
Course::Course(std::string pfx, int num, std::string n) {
    prefix = pfx;
    number = num;
    name = n;
}
Course::Course(const Course& copy) {
    prefix = copy.prefix;
    number = copy.number;
    name = copy.name;
}

std::string Course::getPrefix() {
    return prefix;
}
int Course::getNumber() {
    return number;
}
std::string Course::getName() {
    return name;
}

void Course::setPrefix(std::string pfx) {
    prefix = pfx;
}
void Course::setNumber(int n) {
    number = n;
}
void Course::setName(std::string n) {
    name = n;
}

void Course::print() {
    std::cout << prefix << number << ": " << name << std::endl;
}