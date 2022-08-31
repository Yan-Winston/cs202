// By: Winston Yan
// On: 6/1/2022
//For: CS 202 Assignment 5

#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "person.h"
#include "course.h"

class Instructor: public Person {
    private:
        int salary, numCourses; 
        bool hasPhd, isProfessor;

    public:
        Instructor();
        Instructor(std::string fn, std::string ln, int numC, int sal, bool phd, bool isProf);
        Instructor(const Instructor& copy);

        void setFn(std::string fn);
        void setLn(std::string ln);
        void setSalary(int s);
        void setNumCourses(int n);
        void setHasPhd(bool phd);
        void setIsProf(bool iP);

        std::string getFirstName();
        std::string getLastName();
        int getSalary();
        int getNumCourses();
        bool getPhd();
        bool getProf();

        void calculateMoney(int, float);

        void printTeachingSchedule();
};

#endif