#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "person.h"
#include "course.h"

class Instructor: public Person {
    private:
        Course coursesTaught[BUFFER_SIZE];
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

        void printTeachingSchedule();
        bool addCourseTaught(const Course newCourse);
};

#endif