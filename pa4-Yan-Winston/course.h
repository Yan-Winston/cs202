#ifndef COURSE_H
#define COURSE_H

#include "person.h" //this makes person.h the lowest level .h file with all the includes

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