#include "instructor.h"

Instructor::Instructor() {
    firstName = "teachy";
    lastName = "mcteach-face";

    salary = -1;
    numCourses = 0;
    hasPhd = false;
    isProfessor = false;
}
Instructor::Instructor(std::string fn, std::string ln, int numC, int sal, bool phd, bool isProf) {
    firstName = fn;
    lastName = ln;

    salary = sal;
    numCourses = numC;
    hasPhd = phd;
    isProfessor = isProf;
}
Instructor::Instructor(const Instructor& copy) {
    firstName = copy.firstName;
    lastName = copy.lastName;

    salary = copy.salary;
    numCourses = copy.numCourses;
    hasPhd = copy.hasPhd;
    isProfessor = copy.isProfessor;

    for (int i=0; i < numCourses; i++) {
        coursesTaught[i] = copy.coursesTaught[i];
    }
}



void Instructor::setFn(std::string fn) {
    firstName = fn;
}
void Instructor::setLn(std::string ln) {
    lastName = ln;
}
void Instructor::setSalary(int s) {
    salary = s;
}
void Instructor::setNumCourses(int n) {
    numCourses = n;
}
void Instructor::setHasPhd(bool phd) {
    hasPhd = phd;
}
void Instructor::setIsProf(bool iP) {
    isProfessor = iP;
}

std::string Instructor::getFirstName() {
    return firstName;
}
std::string Instructor::getLastName() {
    return lastName;
}
int Instructor::getSalary() {
    return salary;
}
int Instructor::getNumCourses() {
    return numCourses;
}
bool Instructor::getPhd() {
    return hasPhd;
}
bool Instructor::getProf() {
    return isProfessor;
}



void Instructor::printTeachingSchedule() {
    for (int i=0; i < numCourses; i++) {
        coursesTaught[i].print();
    }
}
bool Instructor::addCourseTaught(const Course newCourse) {
    bool passed = false;
    try {
        if (numCourses != BUFFER_SIZE) {
            coursesTaught[numCourses] = newCourse;
            passed = true;
        } else {
            throw std::invalid_argument("theres no way you added this many courses :skull:\n");
        }
    } catch (std::exception e) {
        return false;
    }

    return passed;
}