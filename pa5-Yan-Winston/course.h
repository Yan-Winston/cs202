// By: Winston Yan
// On: 6/1/2022
//For: CS 202 Assignment 5

#ifndef COURSE_H
#define COURSE_H

#include <iostream>

class Course {
    private:
        std::string prefix;
        int number;
        std::string name;

    public:
        Course();
        Course(std::string prefix, int number, std::string name);
        Course(const Course& copy);

        std::string getPrefix();
        int getNumber();
        std::string getName();

        void setPrefix(std::string pfx);
        void setNumber(int n);
        void setName(std::string name);

        void print();

};

#endif