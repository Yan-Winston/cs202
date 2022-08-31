#include "student.h"

Student::Student() {
    firstName = "student";
    lastName = "constructed";
    number = -1;
    numCourses = 0;
    gpa = -.01;
}
Student::Student(std::string fn, std::string ln, int n, int nc, float g) {
    firstName = fn;
    lastName = ln;
    number = n;
    numCourses = nc;
    gpa = g;
}
Student::Student(const Student& copy) {
    firstName = copy.firstName;
    lastName = copy.lastName;
    number = copy.number;
    numCourses = copy.numCourses;
    gpa = copy.gpa;
    for (int i=0; i < numCourses; i++) {
        schedule[i] = copy.schedule[i];
    }
}



void Student::setFn(std::string fn) {
    firstName = fn;
}
void Student::setLn(std::string ln) {
    lastName = ln;
}
void Student::setNum(int n) {
    number = n;
}
void Student::setNumCourses(int n) {
    numCourses = n;
}
void Student::setGpa(float g) {
    gpa = g;
}

std::string Student::getFirstName() {
    return firstName;
}
std::string Student::getLastName() {
    return lastName;
}
int Student::getNumber() {
    return number;
}
int Student::getNumCourses() {
    return numCourses;
}
float Student::getGpa() {
    return gpa;
}



void Student::printSchedule() {
    for (int i=0; i < numCourses; i++) {
        schedule[i].print();
    }
}
bool Student::addCourse(const Course newCourse) {
    try {
        if (numCourses != BUFFER_SIZE) {
            schedule[numCourses] = newCourse;
        } else {
            throw std::invalid_argument("theres no way you added this many courses :skull:\n");
        }
    } catch (std::exception e) {
        return false;
    }
    return true;
}