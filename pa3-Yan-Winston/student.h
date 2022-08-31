//  By: Winston Yan
//  On: June 13, 2022
// For: CS202 PA3

#ifndef student
#define student

#include "course.h"

class Student {
    private:
        int number;
        int numCourses;
        std::string firstName;
        std::string lastName;
        float gpa;
        Course schedule[BUFF_SIZE];

    public:
        Student();
        Student(int num, int numC, std::string fn, std::string ln, float g, Course s[BUFF_SIZE]);
        Student(const Student& copy);
        
        int getNum();
        void setNum(int newNUM);

        int getNumCourse();
        void setNumCourse(int newNUM);
        
        std::string getFN();
        void setFN(std::string newFN);
        
        std::string getLN();
        void setLN(std::string newLN);
        
        float getGPA();
        void setGPA(float newGPA);
        
        bool addCourse(Course newCourse);

        void printSchedule();
        void print();
};

#endif