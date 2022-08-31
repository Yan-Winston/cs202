//  By: Winston Yan
//  On: June 13, 2022
// For: CS202 PA3

#include "student.h"

Student::Student() {
    number = 000001;
    numCourses = 0;
    firstName = "Bob";
    lastName = "Johnson";
    gpa = 4.0;
}
Student::Student(int num, int numC, std::string fn, std::string ln, float g, Course s[BUFF_SIZE]) {
    number = num;
    numCourses = numC;
    firstName = fn;
    lastName = ln;
    gpa = g;
    for (int i=0; i < BUFF_SIZE; i++) {
        schedule[i] = s[i];
    }
}
Student::Student(const Student& copy) {
    number = copy.number;
    numCourses = copy.numCourses;
    firstName = copy.firstName;
    lastName = copy.lastName;
    gpa = copy.gpa;
    for (int i=0; i < BUFF_SIZE; i++) {
        schedule[i] = copy.schedule[i];
    }
}

int Student::getNum() {return number;}
void Student::setNum(int newNUM) {number = newNUM;}

int Student::getNumCourse() {return numCourses;}
void Student::setNumCourse(int newNUM) {numCourses = newNUM;}

std::string Student::getFN() {return firstName;}
void Student::setFN(std::string newFN) {firstName = newFN;}

std::string Student::getLN() {return lastName;}
void Student::setLN(std::string newLN) {lastName = newLN;}

float Student::getGPA() {return gpa;}
void Student::setGPA(float newGPA) {gpa = newGPA;} 

bool Student::addCourse(Course newCourse) {
    bool passed = false;
    if (numCourses < BUFF_SIZE) {
        schedule[numCourses].setPrefix(newCourse.getPrefix());
        schedule[numCourses].setNum(newCourse.getNum());
        schedule[numCourses].setName(newCourse.getName());
        std::cout << schedule[numCourses].getPrefix() << schedule[numCourses].getNum() << ": " << schedule[numCourses].getName();
        numCourses += 1;
        passed = true;
    }
    return passed;
}

void Student::printSchedule() {
    for (int i=0; i < numCourses; i++) {
        schedule[i].print();
    }
}
void Student::print() {
    std::cout.width(8);
    std::cout << std::left << firstName << " ";
    std::cout.width(6);
    std::cout << std::left << lastName;
}
