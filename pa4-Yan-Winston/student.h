#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"
#include "course.h"

class Student: public Person {
    private:
        int number;
        int numCourses; 
        float gpa; 
        Course schedule[BUFFER_SIZE];

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
        int getNumCourses();
        float getGpa();

        void printSchedule();
        bool addCourse(const Course newCourse);
};

#endif