//  By: Winston Yan
//  On: June 13, 2022
// For: CS202 PA3

#include "course.h"

Course::Course() {
    prefix = "CS";
    number = 101;
    name = "CS 101";
}

Course::Course(std::string p, int num, std::string n) {
    prefix = p;
    number = num;
    name = n;
}

Course::Course(const Course& copy) {
    prefix = copy.prefix;
    number = copy.number;
    name = copy.name;
}


std::string Course::getPrefix() {return prefix;}
void Course::setPrefix(std::string newPrefix) {prefix = newPrefix;}


int Course::getNum() {return number;}
void Course::setNum(int newNum) {number = newNum;}


std::string Course::getName() {return name;}
void Course::setName(std::string newName) {name = newName;}


void Course::print() {std::cout << prefix << number << ": " << name << std::endl;}