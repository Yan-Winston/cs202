//  By: Winston Yan
//  On: June 13, 2022
// For: CS202 PA3

#ifndef course
#define course

#include <iostream>

#define BUFF_SIZE 100
#define MENU "STUDENT MANAGEMENT SYSTEM\n================================\n1.      Display Students\n2.      Add Courses\n3.      Display Student Schedule\n4.      Find Highest GPA Student\n0.      Exit"


class Course {
    private:
        std::string prefix;
        int number;
        std::string name;

    public:
        Course();
        Course(std::string p, int num, std::string n);
        Course(const Course& copy);

        std::string getPrefix();
        void setPrefix(std::string newPrefix);

        int getNum();
        void setNum(int newNUM);
        
        std::string getName();
        void setName(std::string newName);
        
        void print();
};

#endif