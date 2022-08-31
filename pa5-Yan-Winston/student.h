// By: Winston Yan
// On: 6/1/2022
//For: CS 202 Assignment 5

#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"
#include "course.h"

class Student: public Person {
    private:
        int number;
        int numCourses; 
        float gpa; 

    public:
        Student();
        Student(std::string firstName, std::string lastName, int number, int numCourses, float gpa);
        Student(const Student& copy);

        void setFn(std::string fn);
        void setLn(std::string ln);
        void setNum(int n);
        void setNumCourses(int n);
        void setGpa(float g);
        
        std::string getFirstName();
        std::string getLastName();
        int getNumber();
        float getGpa();

        void calculateMoney(int, float);

        void printSchedule();
};

#endif