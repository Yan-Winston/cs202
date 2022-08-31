// By: Winston Yan
// On: 6/4/2022
// For: CS 202 Programming Assignment 2

#include <iostream>
#include <string>

#include "student.h"


int Student::getNum() {return number;}
void Student::setNum(int newNUM) {number = newNUM;}

std::string Student::getFN() {return firstName;}
void Student::setFN(std::string newFN) {firstName = newFN;}

std::string Student::getLN() {return lastName;}
void Student::setLN(std::string newLN) {lastName = newLN;}

float Student::getGPA() {return gpa;}
void Student::setGPA(float newGPA) {gpa = newGPA;}

void Student::print() {
    std::cout.width(8);
    std::cout << std::left << firstName;

    std::cout.width(8);
    std::cout << std::left << lastName;
    
    std::cout.width(6);
    std::cout << std::left << number << std::endl;
}